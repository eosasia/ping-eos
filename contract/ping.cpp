#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>

class hello_world : public eosio::contract {
  public:
      using eosio::contract::contract;
      void ping(account_name receiver) {
         eosio::print("Received ping");
      }
};

EOSIO_ABI( hello_world, (ping) )
