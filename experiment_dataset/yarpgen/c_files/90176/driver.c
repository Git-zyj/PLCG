#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5599653743260920703ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 14446371227926094652ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3546120680521487859ULL;
unsigned long long int var_11 = 4093740413616550286ULL;
unsigned short var_12 = (unsigned short)28362;
signed char var_14 = (signed char)111;
signed char var_16 = (signed char)-123;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)42197;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)26543;
short var_24 = (short)-25680;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
