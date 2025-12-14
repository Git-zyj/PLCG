#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
signed char var_3 = (signed char)99;
unsigned int var_4 = 1567499062U;
int var_6 = 491031641;
short var_8 = (short)-9676;
unsigned int var_9 = 2894434970U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)122;
int zero = 0;
short var_18 = (short)-2454;
unsigned int var_19 = 1141766787U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
