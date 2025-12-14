#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
long long int var_3 = 1904942406952757297LL;
signed char var_5 = (signed char)122;
unsigned long long int var_6 = 3722004639384855156ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3485134887U;
int var_10 = -1632683044;
unsigned short var_11 = (unsigned short)57298;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_18 = (short)-5319;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-13;
unsigned short var_21 = (unsigned short)12498;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)38092;
void init() {
}

void checksum() {
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
