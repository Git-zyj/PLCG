#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7132225788407476117ULL;
long long int var_1 = 7949578237314695066LL;
unsigned char var_2 = (unsigned char)226;
unsigned int var_5 = 876982628U;
int var_7 = -2094133234;
short var_8 = (short)905;
int zero = 0;
int var_10 = 1600357208;
int var_11 = 1859272430;
unsigned char var_12 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
