#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31759;
_Bool var_3 = (_Bool)0;
int var_9 = 367195753;
unsigned short var_11 = (unsigned short)4169;
int zero = 0;
unsigned int var_17 = 3160677494U;
unsigned int var_18 = 1624131850U;
signed char var_19 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
