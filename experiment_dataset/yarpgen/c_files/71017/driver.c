#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 754100312U;
unsigned int var_3 = 2731829796U;
unsigned int var_4 = 975867203U;
unsigned int var_6 = 1174751163U;
unsigned int var_7 = 4236879995U;
unsigned int var_8 = 1986409981U;
unsigned int var_9 = 97654425U;
unsigned int var_10 = 1781258289U;
int zero = 0;
unsigned int var_13 = 262931324U;
unsigned int var_14 = 4270611680U;
unsigned int var_15 = 3308540411U;
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
