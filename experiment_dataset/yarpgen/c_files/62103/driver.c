#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)102;
unsigned short var_6 = (unsigned short)19102;
unsigned char var_7 = (unsigned char)21;
int zero = 0;
signed char var_10 = (signed char)68;
long long int var_11 = 4611404773436052344LL;
long long int var_12 = 3975514280296732971LL;
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
