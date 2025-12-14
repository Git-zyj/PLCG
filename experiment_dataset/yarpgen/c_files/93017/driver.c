#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27693;
unsigned short var_2 = (unsigned short)44913;
unsigned long long int var_6 = 16443933771294296213ULL;
unsigned char var_9 = (unsigned char)65;
signed char var_10 = (signed char)21;
int zero = 0;
int var_13 = -1125300149;
unsigned int var_14 = 552579502U;
long long int var_15 = 777770098130914568LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
