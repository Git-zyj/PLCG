#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1228685898U;
unsigned short var_4 = (unsigned short)4523;
unsigned char var_11 = (unsigned char)103;
int var_14 = 1845651451;
int zero = 0;
signed char var_16 = (signed char)81;
signed char var_17 = (signed char)84;
unsigned int var_18 = 1035665736U;
int var_19 = 133834792;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
