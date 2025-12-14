#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15378;
long long int var_4 = -1208964155530840729LL;
_Bool var_6 = (_Bool)1;
int var_7 = -72978019;
unsigned int var_8 = 1051474270U;
unsigned int var_9 = 4019387017U;
int zero = 0;
short var_16 = (short)9951;
signed char var_17 = (signed char)-2;
unsigned short var_18 = (unsigned short)26617;
void init() {
}

void checksum() {
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
