#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3041199829610826395LL;
long long int var_2 = 6845957881361177209LL;
unsigned int var_3 = 624112058U;
long long int var_4 = -3792875657998962557LL;
unsigned long long int var_5 = 6631703424225637926ULL;
unsigned long long int var_8 = 5903132276872117328ULL;
unsigned int var_10 = 2605245625U;
unsigned int var_12 = 190004878U;
int zero = 0;
unsigned int var_13 = 3371951681U;
unsigned int var_14 = 3421809950U;
void init() {
}

void checksum() {
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
