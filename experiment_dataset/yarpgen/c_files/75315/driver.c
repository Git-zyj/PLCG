#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)7;
short var_3 = (short)-22993;
signed char var_4 = (signed char)16;
unsigned long long int var_5 = 10436773123367971594ULL;
unsigned long long int var_6 = 16358431751277151567ULL;
unsigned short var_7 = (unsigned short)63372;
_Bool var_8 = (_Bool)0;
short var_9 = (short)18376;
int zero = 0;
short var_10 = (short)16326;
unsigned short var_11 = (unsigned short)55954;
unsigned long long int var_12 = 9293343065970853612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
