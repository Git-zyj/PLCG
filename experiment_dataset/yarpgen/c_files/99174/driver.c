#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1871392135;
int var_1 = 1533963896;
unsigned int var_2 = 2779471500U;
int var_4 = -2071899909;
unsigned long long int var_5 = 8389711664279273610ULL;
long long int var_6 = -3912207893839594165LL;
signed char var_7 = (signed char)57;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-81;
unsigned int var_12 = 3458712110U;
int zero = 0;
signed char var_13 = (signed char)28;
unsigned int var_14 = 74983197U;
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
