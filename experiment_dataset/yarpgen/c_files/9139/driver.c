#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-32159;
signed char var_6 = (signed char)-86;
signed char var_8 = (signed char)-55;
int var_9 = 274791926;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 10491613964191417833ULL;
short var_20 = (short)-20071;
unsigned int var_21 = 2160311085U;
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
