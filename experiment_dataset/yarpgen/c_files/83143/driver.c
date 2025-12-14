#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6319274549073859756ULL;
signed char var_5 = (signed char)93;
long long int var_10 = 7615934968791890837LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 608902529U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
