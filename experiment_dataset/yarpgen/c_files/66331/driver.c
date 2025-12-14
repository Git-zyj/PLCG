#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)47;
unsigned short var_8 = (unsigned short)62072;
signed char var_11 = (signed char)69;
long long int var_12 = 9135591641564703294LL;
int zero = 0;
unsigned short var_13 = (unsigned short)62277;
long long int var_14 = -1815664672942043267LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
