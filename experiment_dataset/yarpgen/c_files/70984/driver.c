#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2981777748350271733LL;
int var_3 = 701325026;
unsigned long long int var_4 = 9307206708316595342ULL;
short var_6 = (short)16870;
unsigned long long int var_7 = 8222977674956289853ULL;
short var_10 = (short)18333;
int zero = 0;
long long int var_12 = -380912465118393099LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
