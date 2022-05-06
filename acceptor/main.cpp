#include<iostream>

#include<boost/asio.hpp>


int main()
{
    try
    {
        using namespace boost;
        asio::io_context ctx;
        asio::ip::tcp::acceptor acp(ctx);
        auto ep = asio::ip::tcp::endpoint(asio::ip::tcp::v4(), 12345);
        acp.open(ep.protocol());
        acp.bind(ep);
        
        auto sock = acp.accept();
        

        std::cout << sock.remote_endpoint().address().to_string();
        std::cin.get();
    }
    catch(std::exception& e)
    {
        std::cout << e.what();
    }
}