#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3412098208U;
unsigned int var_5 = 3813032426U;
unsigned int var_9 = 1191064791U;
short var_10 = (short)-14377;
int zero = 0;
long long int var_12 = 6257631957121263359LL;
signed char var_13 = (signed char)92;
unsigned short var_14 = (unsigned short)51905;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
