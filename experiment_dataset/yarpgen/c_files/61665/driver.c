#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1875822384;
int var_4 = -1613567077;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1523407378U;
signed char var_15 = (signed char)47;
int var_18 = 6764878;
signed char var_19 = (signed char)81;
int zero = 0;
unsigned char var_20 = (unsigned char)41;
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
