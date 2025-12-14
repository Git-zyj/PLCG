#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1428443198819474360LL;
int var_1 = -1985670882;
unsigned int var_5 = 3944034426U;
signed char var_7 = (signed char)-64;
unsigned short var_9 = (unsigned short)62612;
int var_10 = 1066677286;
long long int var_11 = -7618708267389726286LL;
int zero = 0;
signed char var_13 = (signed char)78;
long long int var_14 = 1449136625575444526LL;
long long int var_15 = -2403449724467827178LL;
long long int var_16 = 777440077928668144LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
