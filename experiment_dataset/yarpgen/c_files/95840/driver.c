#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 821648635U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 10617208918983112975ULL;
int var_14 = -1779455056;
int zero = 0;
unsigned short var_18 = (unsigned short)65121;
unsigned long long int var_19 = 9998410828724310779ULL;
unsigned long long int var_20 = 11599693211859379370ULL;
unsigned int var_21 = 4284696518U;
signed char var_22 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
