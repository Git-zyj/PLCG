#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
unsigned short var_7 = (unsigned short)46801;
signed char var_9 = (signed char)(-127 - 1);
short var_10 = (short)7851;
_Bool var_12 = (_Bool)0;
unsigned short var_17 = (unsigned short)3361;
short var_18 = (short)-2190;
signed char var_19 = (signed char)-94;
int zero = 0;
int var_20 = -260212587;
unsigned long long int var_21 = 15906525406538918678ULL;
int var_22 = -1124054537;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
