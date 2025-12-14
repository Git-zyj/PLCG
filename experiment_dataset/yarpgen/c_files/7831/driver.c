#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1558;
unsigned long long int var_1 = 14121937988962896655ULL;
long long int var_2 = 7881904974965448528LL;
int var_4 = -873883038;
short var_5 = (short)-21143;
unsigned long long int var_6 = 11540263486233013591ULL;
unsigned int var_7 = 1011970436U;
unsigned int var_9 = 1962522767U;
int zero = 0;
unsigned int var_11 = 3675441473U;
int var_12 = -240292707;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
