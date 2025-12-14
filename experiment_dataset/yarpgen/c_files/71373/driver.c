#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1715982975U;
long long int var_5 = -2429088000486261172LL;
short var_6 = (short)-6024;
unsigned short var_11 = (unsigned short)25294;
long long int var_12 = -7020021919544447312LL;
int var_13 = -1375184801;
long long int var_15 = 4974962948565777818LL;
signed char var_17 = (signed char)-48;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1939261570;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)51694;
int var_22 = -564753873;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
