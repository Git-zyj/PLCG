#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8572429163283051204LL;
unsigned char var_3 = (unsigned char)184;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)150;
unsigned int var_6 = 683643288U;
unsigned char var_7 = (unsigned char)234;
short var_8 = (short)23668;
signed char var_10 = (signed char)-102;
_Bool var_11 = (_Bool)1;
long long int var_12 = 6863564100678954105LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
