#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6838643961048805798LL;
long long int var_5 = -4978867811330680200LL;
long long int var_6 = -8885632537096628625LL;
long long int var_11 = -7662873557565121611LL;
long long int var_14 = 6931443622876139930LL;
int zero = 0;
long long int var_15 = -4571219511132545610LL;
long long int var_16 = 8475525820034232424LL;
long long int var_17 = -8013807518173356672LL;
long long int var_18 = 6337540351472497046LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
