#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned short var_4 = (unsigned short)58799;
unsigned long long int var_5 = 1426614807266421639ULL;
unsigned long long int var_14 = 3069313390626689914ULL;
int var_16 = -1674094976;
int zero = 0;
unsigned char var_17 = (unsigned char)28;
int var_18 = 254808707;
short var_19 = (short)9147;
signed char var_20 = (signed char)-88;
void init() {
}

void checksum() {
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
