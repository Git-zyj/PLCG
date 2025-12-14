#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1509749792880896148ULL;
unsigned short var_1 = (unsigned short)35273;
short var_2 = (short)7137;
unsigned short var_3 = (unsigned short)7320;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1840365788;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
