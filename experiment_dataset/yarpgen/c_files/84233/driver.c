#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 558165549099611927ULL;
unsigned char var_8 = (unsigned char)245;
unsigned int var_10 = 2074538943U;
unsigned long long int var_11 = 7704284195762101365ULL;
int zero = 0;
long long int var_12 = -6595746392204337815LL;
unsigned char var_13 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
