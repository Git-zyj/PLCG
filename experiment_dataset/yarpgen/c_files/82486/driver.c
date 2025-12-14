#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 233700600U;
unsigned int var_4 = 1401959882U;
unsigned int var_14 = 2483793360U;
int zero = 0;
unsigned int var_18 = 833791199U;
unsigned int var_19 = 1181728124U;
void init() {
}

void checksum() {
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
