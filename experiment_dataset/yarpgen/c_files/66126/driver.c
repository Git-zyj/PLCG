#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -826911811;
unsigned int var_3 = 3577626493U;
unsigned int var_9 = 2360253460U;
unsigned char var_13 = (unsigned char)255;
unsigned int var_15 = 1989988669U;
short var_16 = (short)16919;
int var_17 = 918811269;
int zero = 0;
unsigned short var_19 = (unsigned short)37056;
unsigned short var_20 = (unsigned short)43062;
int var_21 = -668585565;
int var_22 = -2100122289;
unsigned int var_23 = 200625130U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
