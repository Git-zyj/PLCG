#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1139365255;
int var_4 = -204122764;
unsigned int var_6 = 2257928344U;
signed char var_9 = (signed char)-82;
unsigned int var_10 = 4240118815U;
int zero = 0;
int var_11 = 246263389;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
