#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32912;
signed char var_2 = (signed char)-100;
signed char var_3 = (signed char)123;
unsigned long long int var_4 = 12323060901965814114ULL;
unsigned int var_5 = 3071422806U;
unsigned int var_7 = 925494873U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-3145;
int zero = 0;
signed char var_10 = (signed char)-52;
unsigned long long int var_11 = 13777000324528687752ULL;
int var_12 = -1633617306;
unsigned long long int var_13 = 7877037397893215406ULL;
short var_14 = (short)5825;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
