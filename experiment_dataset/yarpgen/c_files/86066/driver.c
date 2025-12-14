#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2977169368219137353LL;
int var_4 = 947468303;
unsigned short var_6 = (unsigned short)15075;
int zero = 0;
short var_10 = (short)-20265;
unsigned char var_11 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
