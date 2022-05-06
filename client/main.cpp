#include<iostream>

#include<boost/asio.hpp>


int main()
{
    using namespace boost;
    std::string ip_a; unsigned short port = 0;
    asio::io_context ctx;

    asio::ip::tcp::socket sock(ctx);
    auto ep = asio::ip::tcp::endpoint(asio::ip::make_address(ip_a),port);
    sock.connect(ep);
}