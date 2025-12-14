#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51317;
unsigned long long int var_4 = 4992786657261037244ULL;
unsigned char var_7 = (unsigned char)255;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1426376360U;
unsigned long long int var_15 = 5901565474785815759ULL;
signed char var_16 = (signed char)-53;
long long int var_17 = 8693199706679377063LL;
unsigned short var_18 = (unsigned short)43594;
int zero = 0;
unsigned int var_19 = 961242206U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)89;
int var_22 = -930761981;
void init() {
}

void checksum() {
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
