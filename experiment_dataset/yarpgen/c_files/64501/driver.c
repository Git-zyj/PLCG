#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4346900165322040771LL;
unsigned short var_1 = (unsigned short)1869;
unsigned long long int var_3 = 2778920278548333381ULL;
unsigned short var_4 = (unsigned short)45679;
unsigned short var_5 = (unsigned short)38591;
long long int var_7 = -356798539028899922LL;
unsigned char var_8 = (unsigned char)69;
int zero = 0;
unsigned short var_13 = (unsigned short)19232;
int var_14 = 362139716;
void init() {
}

void checksum() {
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
