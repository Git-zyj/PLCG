#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned short var_6 = (unsigned short)40492;
unsigned int var_10 = 1905406971U;
signed char var_16 = (signed char)101;
unsigned long long int var_18 = 7519017572342730586ULL;
int zero = 0;
short var_19 = (short)-29269;
signed char var_20 = (signed char)54;
short var_21 = (short)-17436;
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
