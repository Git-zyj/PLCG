#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21038;
unsigned char var_4 = (unsigned char)195;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 3068522377U;
int zero = 0;
short var_14 = (short)32490;
short var_15 = (short)-4151;
void init() {
}

void checksum() {
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
