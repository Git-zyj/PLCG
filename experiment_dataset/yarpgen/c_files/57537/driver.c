#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
unsigned char var_3 = (unsigned char)183;
long long int var_9 = 3972065350948386582LL;
int zero = 0;
unsigned char var_11 = (unsigned char)249;
unsigned char var_12 = (unsigned char)99;
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
