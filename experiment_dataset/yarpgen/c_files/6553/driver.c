#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58676;
int var_3 = 175329233;
signed char var_4 = (signed char)97;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)115;
int var_8 = 763385894;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)57272;
signed char var_12 = (signed char)-98;
int var_13 = 976107937;
unsigned long long int var_14 = 12698434271883505479ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)54678;
unsigned short var_18 = (unsigned short)50258;
unsigned short var_19 = (unsigned short)30455;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
