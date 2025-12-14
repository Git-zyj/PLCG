#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)59380;
long long int var_5 = -2856387265375544572LL;
unsigned long long int var_6 = 18155596867262341429ULL;
unsigned int var_7 = 31682913U;
unsigned short var_8 = (unsigned short)33314;
int var_9 = -1645077595;
int var_12 = 1324755507;
unsigned long long int var_13 = 5395568266473282748ULL;
signed char var_15 = (signed char)-68;
int zero = 0;
int var_17 = 1328315004;
int var_18 = 1198283970;
short var_19 = (short)3391;
unsigned short var_20 = (unsigned short)47932;
void init() {
}

void checksum() {
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
