#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
signed char var_2 = (signed char)-59;
unsigned char var_5 = (unsigned char)105;
long long int var_6 = -7591541314723941460LL;
int var_10 = -1583713349;
unsigned char var_12 = (unsigned char)176;
int var_14 = -1219878678;
int zero = 0;
unsigned short var_16 = (unsigned short)61154;
int var_17 = 69379959;
_Bool var_18 = (_Bool)1;
int var_19 = -1252532460;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
