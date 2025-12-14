#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14922541545792350499ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)75;
signed char var_14 = (signed char)-48;
unsigned short var_16 = (unsigned short)7126;
int zero = 0;
short var_18 = (short)13179;
unsigned short var_19 = (unsigned short)32694;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10310155459856335203ULL;
void init() {
}

void checksum() {
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
