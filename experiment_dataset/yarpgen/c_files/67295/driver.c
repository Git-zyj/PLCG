#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33838;
int var_1 = 993835081;
long long int var_2 = 8254001506505054137LL;
short var_3 = (short)-9339;
signed char var_11 = (signed char)-125;
unsigned int var_16 = 3989955480U;
int var_18 = -1920633478;
unsigned short var_19 = (unsigned short)52596;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1263924703U;
unsigned long long int var_22 = 5322009603110212673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
