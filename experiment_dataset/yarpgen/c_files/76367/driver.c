#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10524;
signed char var_3 = (signed char)-44;
signed char var_4 = (signed char)16;
signed char var_5 = (signed char)102;
long long int var_7 = 7048224605537489897LL;
short var_8 = (short)11736;
int var_9 = -1256391855;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)15384;
unsigned short var_13 = (unsigned short)35969;
unsigned short var_14 = (unsigned short)10239;
void init() {
}

void checksum() {
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
