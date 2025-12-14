#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1269524948984575873LL;
short var_1 = (short)-10401;
long long int var_2 = -7834548083413845280LL;
unsigned int var_3 = 94856510U;
short var_4 = (short)9068;
short var_8 = (short)-22911;
short var_9 = (short)-21338;
unsigned char var_10 = (unsigned char)254;
int zero = 0;
unsigned char var_12 = (unsigned char)43;
short var_13 = (short)-25990;
long long int var_14 = -1652410892137278689LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
