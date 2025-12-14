#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)93;
unsigned char var_7 = (unsigned char)11;
unsigned char var_12 = (unsigned char)125;
unsigned short var_18 = (unsigned short)61669;
int zero = 0;
long long int var_19 = -5025807706592632746LL;
short var_20 = (short)-16353;
signed char var_21 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
