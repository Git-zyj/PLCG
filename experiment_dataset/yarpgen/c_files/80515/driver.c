#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2085164753;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 2290311937U;
signed char var_18 = (signed char)90;
int zero = 0;
unsigned int var_20 = 422883430U;
int var_21 = 755581752;
signed char var_22 = (signed char)57;
long long int var_23 = 1979302808622998357LL;
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
