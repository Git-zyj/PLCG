#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 2089375774;
unsigned short var_3 = (unsigned short)22620;
unsigned char var_6 = (unsigned char)169;
signed char var_8 = (signed char)-23;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6268;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)25383;
unsigned int var_19 = 3158210798U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
