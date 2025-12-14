#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = 2621256440479465070LL;
unsigned int var_8 = 3677082202U;
int var_9 = 1208968167;
int zero = 0;
int var_10 = 1454025952;
unsigned int var_11 = 3163959045U;
signed char var_12 = (signed char)-125;
int var_13 = -1884655881;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
