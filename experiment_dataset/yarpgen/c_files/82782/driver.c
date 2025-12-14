#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2830754814U;
unsigned long long int var_3 = 14341408396356503561ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = -1343995403;
signed char var_10 = (signed char)-50;
unsigned long long int var_11 = 5810854240231018247ULL;
int zero = 0;
unsigned int var_14 = 1346604053U;
signed char var_15 = (signed char)65;
int var_16 = 2007370134;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)40717;
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
