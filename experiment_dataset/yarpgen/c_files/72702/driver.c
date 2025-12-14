#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned char var_6 = (unsigned char)163;
unsigned char var_10 = (unsigned char)50;
unsigned char var_13 = (unsigned char)228;
int zero = 0;
unsigned int var_14 = 3259885258U;
unsigned char var_15 = (unsigned char)181;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
