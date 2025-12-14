#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1348731255;
int var_4 = 1738673449;
int var_11 = -400699457;
int var_13 = 965410566;
int var_14 = 504144296;
int var_15 = 847985976;
int zero = 0;
int var_18 = -800280017;
int var_19 = 887645535;
int var_20 = 220659958;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
