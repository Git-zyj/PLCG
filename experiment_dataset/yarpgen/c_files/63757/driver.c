#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19264;
unsigned long long int var_2 = 3986407217984726795ULL;
unsigned int var_3 = 3789955973U;
signed char var_6 = (signed char)-41;
short var_7 = (short)-11298;
unsigned short var_8 = (unsigned short)30381;
signed char var_9 = (signed char)-96;
long long int var_10 = -8104974046868936217LL;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1191351966U;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-51;
signed char var_19 = (signed char)-97;
unsigned short var_20 = (unsigned short)54523;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
