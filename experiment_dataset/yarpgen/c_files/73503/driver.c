#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6142343737088138173LL;
unsigned int var_7 = 1305472790U;
unsigned short var_9 = (unsigned short)55677;
int zero = 0;
unsigned short var_17 = (unsigned short)44891;
unsigned long long int var_18 = 14124272376675571525ULL;
unsigned char var_19 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
