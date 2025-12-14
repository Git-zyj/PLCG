#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7336;
unsigned short var_5 = (unsigned short)50735;
signed char var_11 = (signed char)17;
signed char var_15 = (signed char)-110;
unsigned short var_17 = (unsigned short)23432;
int zero = 0;
unsigned int var_19 = 262046265U;
unsigned short var_20 = (unsigned short)59721;
void init() {
}

void checksum() {
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
