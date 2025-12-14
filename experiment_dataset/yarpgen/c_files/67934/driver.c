#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 551174086U;
unsigned long long int var_4 = 13575772670959114394ULL;
unsigned char var_7 = (unsigned char)77;
unsigned long long int var_9 = 5519469957104815973ULL;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
unsigned long long int var_14 = 11721928460699765500ULL;
signed char var_15 = (signed char)-78;
long long int var_16 = 3853414016012632706LL;
unsigned short var_17 = (unsigned short)22720;
void init() {
}

void checksum() {
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
