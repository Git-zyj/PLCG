#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
unsigned short var_3 = (unsigned short)28548;
signed char var_7 = (signed char)85;
signed char var_9 = (signed char)-87;
unsigned short var_11 = (unsigned short)59313;
signed char var_12 = (signed char)-19;
unsigned char var_13 = (unsigned char)143;
int var_14 = -655538760;
int zero = 0;
unsigned long long int var_17 = 16631239157557312552ULL;
unsigned int var_18 = 2288904842U;
unsigned long long int var_19 = 7168972600122102783ULL;
unsigned short var_20 = (unsigned short)25951;
unsigned long long int var_21 = 12928185451357192759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
