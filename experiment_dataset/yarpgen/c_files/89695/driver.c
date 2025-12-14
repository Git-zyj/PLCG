#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16423182965405450370ULL;
long long int var_12 = 4855881310490225460LL;
int var_13 = 722006476;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
unsigned short var_16 = (unsigned short)24172;
signed char var_17 = (signed char)-18;
signed char var_18 = (signed char)-98;
unsigned int var_19 = 3532213391U;
unsigned char var_20 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
