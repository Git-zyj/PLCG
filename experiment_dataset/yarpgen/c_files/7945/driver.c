#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7131089964102451847LL;
signed char var_4 = (signed char)-59;
unsigned long long int var_6 = 3566704120815392441ULL;
unsigned int var_7 = 3273411423U;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1616632178;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1407723959U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
