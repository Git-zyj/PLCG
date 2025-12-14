#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 805148158U;
int var_1 = 1390096984;
int var_2 = 1091080304;
unsigned int var_4 = 516571014U;
int var_6 = -1593988197;
unsigned int var_7 = 2276056600U;
int var_8 = -715989660;
int zero = 0;
int var_17 = -465989832;
int var_18 = -613184733;
unsigned int var_19 = 353774684U;
int var_20 = -280923124;
unsigned int var_21 = 22917396U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
