#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 134726604U;
unsigned int var_2 = 2722930287U;
unsigned int var_3 = 3080264573U;
unsigned int var_5 = 2606642120U;
unsigned int var_6 = 1120169464U;
unsigned int var_7 = 1039136676U;
unsigned int var_8 = 1028036644U;
unsigned int var_9 = 2593192797U;
unsigned int var_10 = 1588973860U;
unsigned int var_11 = 1889163996U;
unsigned int var_12 = 1825583826U;
unsigned int var_13 = 3148951692U;
int zero = 0;
unsigned int var_15 = 1022278043U;
unsigned int var_16 = 369539303U;
unsigned int var_17 = 3764644540U;
unsigned int var_18 = 587600999U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
