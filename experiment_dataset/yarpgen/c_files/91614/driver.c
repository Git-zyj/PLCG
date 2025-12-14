#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4129516435U;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 573842605U;
int zero = 0;
unsigned long long int var_13 = 9896365922357681930ULL;
unsigned char var_14 = (unsigned char)67;
signed char var_15 = (signed char)-89;
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
