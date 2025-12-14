#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3244487383U;
unsigned long long int var_5 = 11744805803065120000ULL;
unsigned int var_8 = 849415022U;
unsigned char var_9 = (unsigned char)50;
signed char var_10 = (signed char)-40;
int zero = 0;
signed char var_12 = (signed char)53;
unsigned int var_13 = 2637329996U;
long long int var_14 = -47616297536254833LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
