#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned char var_2 = (unsigned char)106;
signed char var_3 = (signed char)-25;
int var_6 = 794157718;
short var_8 = (short)-4297;
signed char var_10 = (signed char)105;
unsigned short var_11 = (unsigned short)53910;
unsigned long long int var_13 = 16701560794959187255ULL;
unsigned int var_14 = 608312578U;
int zero = 0;
int var_15 = -1789122373;
unsigned char var_16 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
