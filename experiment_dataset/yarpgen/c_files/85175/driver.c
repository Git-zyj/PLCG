#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned int var_2 = 3645673888U;
short var_3 = (short)-17255;
long long int var_4 = -6563207384059721682LL;
int var_5 = -1783901331;
int var_6 = 257875526;
unsigned int var_8 = 3959633526U;
_Bool var_10 = (_Bool)0;
int var_11 = 979816868;
signed char var_12 = (signed char)96;
int zero = 0;
short var_13 = (short)-19425;
int var_14 = 2093328263;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
