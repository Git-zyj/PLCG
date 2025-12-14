#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49730;
signed char var_2 = (signed char)111;
signed char var_4 = (signed char)36;
signed char var_5 = (signed char)13;
unsigned char var_6 = (unsigned char)17;
unsigned int var_7 = 2343416065U;
unsigned int var_8 = 1392524303U;
unsigned int var_10 = 1891015228U;
unsigned int var_11 = 3412480825U;
signed char var_12 = (signed char)13;
unsigned int var_13 = 223821174U;
int zero = 0;
unsigned long long int var_14 = 7023874913783892739ULL;
unsigned int var_15 = 766388359U;
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
