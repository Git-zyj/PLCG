#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)119;
unsigned long long int var_5 = 8574536583741304431ULL;
short var_6 = (short)16879;
unsigned long long int var_7 = 990421370075409968ULL;
unsigned char var_8 = (unsigned char)221;
long long int var_9 = -5273273367638864354LL;
unsigned long long int var_11 = 5754910916471742539ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12896500409782751058ULL;
short var_14 = (short)-14466;
unsigned int var_15 = 2602490662U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
