#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2812276691U;
unsigned char var_7 = (unsigned char)115;
int var_17 = -1470968350;
unsigned long long int var_18 = 9703280679972738058ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)4272;
long long int var_21 = -336816729994463879LL;
void init() {
}

void checksum() {
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
