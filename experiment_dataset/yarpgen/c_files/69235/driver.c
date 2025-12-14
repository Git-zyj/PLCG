#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17876;
unsigned int var_4 = 3988763916U;
unsigned short var_6 = (unsigned short)3004;
unsigned short var_7 = (unsigned short)50547;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2229937376U;
unsigned long long int var_14 = 3973239718950210847ULL;
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
