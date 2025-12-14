#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
short var_1 = (short)10035;
unsigned long long int var_2 = 4456425287308505885ULL;
short var_3 = (short)5214;
unsigned long long int var_6 = 4737647239992072138ULL;
unsigned long long int var_7 = 8493465791281252986ULL;
short var_8 = (short)-2198;
signed char var_9 = (signed char)76;
unsigned long long int var_10 = 1667034883051127527ULL;
short var_12 = (short)-21935;
int zero = 0;
int var_13 = 425152730;
long long int var_14 = -6181135121561605321LL;
int var_15 = 249183738;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
