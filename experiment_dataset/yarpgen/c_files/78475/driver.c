#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17956325104542006468ULL;
unsigned char var_1 = (unsigned char)98;
short var_8 = (short)15695;
unsigned char var_14 = (unsigned char)77;
int zero = 0;
unsigned int var_16 = 2478522639U;
unsigned int var_17 = 1628383508U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
