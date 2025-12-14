#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4202;
int var_1 = -444086085;
_Bool var_4 = (_Bool)1;
long long int var_7 = -7989865812684592896LL;
unsigned int var_8 = 937717734U;
int var_10 = 282860065;
int zero = 0;
signed char var_14 = (signed char)115;
signed char var_15 = (signed char)-104;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)23875;
unsigned int var_18 = 3647361259U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
