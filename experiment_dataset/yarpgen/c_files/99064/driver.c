#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3067983446381117389LL;
unsigned long long int var_2 = 4206464769746659636ULL;
int zero = 0;
int var_15 = 748022352;
unsigned short var_16 = (unsigned short)44063;
unsigned short var_17 = (unsigned short)9112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
