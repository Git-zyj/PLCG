#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2583420021463155465LL;
unsigned char var_3 = (unsigned char)2;
long long int var_5 = 4143605112545994836LL;
unsigned int var_6 = 1053834082U;
long long int var_9 = 4184290123263078000LL;
int zero = 0;
unsigned int var_10 = 1416426422U;
long long int var_11 = -2830489221753401047LL;
unsigned char var_12 = (unsigned char)248;
signed char var_13 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
