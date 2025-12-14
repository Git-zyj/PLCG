#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12649;
unsigned short var_2 = (unsigned short)55721;
long long int var_3 = -3187671469947156975LL;
unsigned short var_4 = (unsigned short)28983;
signed char var_8 = (signed char)94;
unsigned int var_12 = 632017905U;
long long int var_14 = -365358724699352229LL;
int var_17 = -335705737;
signed char var_18 = (signed char)-117;
unsigned long long int var_19 = 3134505104223108633ULL;
int zero = 0;
unsigned long long int var_20 = 9674505990100444928ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
