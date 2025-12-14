#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)55;
long long int var_3 = -1376256431737718950LL;
unsigned int var_6 = 3256213926U;
unsigned short var_7 = (unsigned short)17050;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_17 = (short)30855;
unsigned short var_18 = (unsigned short)60923;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)125;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
