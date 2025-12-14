#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -748049890;
long long int var_5 = -2693738050623777089LL;
unsigned char var_11 = (unsigned char)9;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
long long int var_13 = -6313980276092852881LL;
signed char var_14 = (signed char)102;
unsigned short var_15 = (unsigned short)24446;
unsigned char var_16 = (unsigned char)231;
unsigned char var_17 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
