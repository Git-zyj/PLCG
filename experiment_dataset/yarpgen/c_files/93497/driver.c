#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 804934043;
int var_9 = 368319438;
int var_18 = -168903369;
int zero = 0;
unsigned long long int var_20 = 15966238022528705662ULL;
short var_21 = (short)13202;
unsigned int var_22 = 713664267U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
