#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3462609468U;
unsigned short var_1 = (unsigned short)18366;
long long int var_2 = -11778697526777213LL;
signed char var_5 = (signed char)78;
unsigned short var_6 = (unsigned short)5114;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)46701;
short var_14 = (short)6854;
unsigned char var_18 = (unsigned char)191;
int zero = 0;
signed char var_19 = (signed char)7;
unsigned char var_20 = (unsigned char)140;
signed char var_21 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
