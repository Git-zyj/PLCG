#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -351658260;
signed char var_1 = (signed char)-26;
signed char var_4 = (signed char)-110;
int var_10 = -2060457853;
_Bool var_15 = (_Bool)0;
int var_16 = -1294796002;
unsigned long long int var_18 = 15890731830784347239ULL;
int zero = 0;
short var_19 = (short)928;
int var_20 = -838511052;
signed char var_21 = (signed char)19;
long long int var_22 = 4412166825333286586LL;
unsigned short var_23 = (unsigned short)48815;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
