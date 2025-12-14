#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 691266971U;
unsigned long long int var_2 = 6156153744691500116ULL;
unsigned long long int var_10 = 17498392405617418625ULL;
int zero = 0;
unsigned long long int var_12 = 1535856342726696700ULL;
unsigned int var_13 = 1323716379U;
unsigned int var_14 = 3380750293U;
unsigned int var_15 = 1630959060U;
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
