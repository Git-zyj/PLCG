#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 801809249U;
unsigned short var_2 = (unsigned short)63059;
int var_3 = -1811309982;
int var_7 = -513169132;
unsigned long long int var_9 = 10764635110024107076ULL;
short var_13 = (short)4279;
int zero = 0;
unsigned int var_20 = 1574399035U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
