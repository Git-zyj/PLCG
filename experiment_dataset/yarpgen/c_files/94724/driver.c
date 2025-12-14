#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
short var_2 = (short)1327;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)(-127 - 1);
unsigned long long int var_8 = 4689686791227952900ULL;
int zero = 0;
unsigned int var_10 = 2724105360U;
unsigned int var_11 = 38268260U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
