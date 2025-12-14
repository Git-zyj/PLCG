#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-85;
short var_3 = (short)-13662;
long long int var_5 = 7322804798845792106LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 7650384690560848110LL;
long long int var_9 = -3413858885208269923LL;
signed char var_13 = (signed char)-75;
short var_14 = (short)32297;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)26270;
unsigned char var_18 = (unsigned char)101;
int var_19 = 336260315;
unsigned short var_20 = (unsigned short)52140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
