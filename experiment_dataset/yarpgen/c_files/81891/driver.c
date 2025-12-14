#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-111;
unsigned int var_5 = 1039156180U;
int var_9 = -1047613648;
unsigned char var_10 = (unsigned char)99;
unsigned int var_13 = 555155122U;
unsigned short var_15 = (unsigned short)28448;
int zero = 0;
unsigned short var_16 = (unsigned short)17658;
signed char var_17 = (signed char)-74;
signed char var_18 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
