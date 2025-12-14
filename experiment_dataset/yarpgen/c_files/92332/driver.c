#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1192338739;
unsigned char var_1 = (unsigned char)21;
long long int var_8 = 6051217300250174704LL;
long long int var_10 = -6745057436752366287LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1095031777U;
_Bool var_16 = (_Bool)0;
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
