#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20302;
unsigned long long int var_3 = 11983141594816689388ULL;
int var_4 = 1161489010;
unsigned int var_6 = 2721633226U;
signed char var_7 = (signed char)26;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)102;
short var_12 = (short)-32488;
unsigned short var_13 = (unsigned short)5267;
int zero = 0;
unsigned int var_14 = 134903947U;
unsigned int var_15 = 3030690887U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
