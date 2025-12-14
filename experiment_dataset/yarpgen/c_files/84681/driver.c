#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7459164741906862678LL;
int var_3 = 497022606;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)7287;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-49;
unsigned int var_15 = 4276375516U;
unsigned long long int var_16 = 16514141054602635096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
