#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7541611191274924144LL;
unsigned short var_2 = (unsigned short)27149;
unsigned char var_4 = (unsigned char)33;
unsigned short var_6 = (unsigned short)42313;
unsigned int var_11 = 3423285692U;
int zero = 0;
unsigned long long int var_14 = 8373920439112110019ULL;
unsigned char var_15 = (unsigned char)157;
unsigned long long int var_16 = 7525957671769867055ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
