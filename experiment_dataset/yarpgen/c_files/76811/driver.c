#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20146;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-10307;
short var_4 = (short)-27489;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1041602342649866771ULL;
unsigned short var_7 = (unsigned short)8070;
signed char var_8 = (signed char)43;
unsigned int var_9 = 2435899646U;
unsigned short var_10 = (unsigned short)19058;
short var_12 = (short)-5401;
short var_13 = (short)-17472;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -1738848000;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
