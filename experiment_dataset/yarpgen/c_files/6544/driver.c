#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10231;
long long int var_3 = -2689647306943410185LL;
_Bool var_4 = (_Bool)0;
int var_7 = 885314864;
unsigned short var_9 = (unsigned short)42045;
long long int var_13 = 4217523854009485540LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = -4342782487722342355LL;
short var_21 = (short)-9075;
signed char var_22 = (signed char)-55;
unsigned short var_23 = (unsigned short)18831;
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
