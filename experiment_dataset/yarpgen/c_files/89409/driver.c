#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10584669280609949216ULL;
unsigned int var_2 = 317424669U;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-11;
signed char var_9 = (signed char)-90;
int zero = 0;
unsigned long long int var_15 = 5242448043125760238ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8319533752767040480ULL;
int var_18 = -1557980295;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
