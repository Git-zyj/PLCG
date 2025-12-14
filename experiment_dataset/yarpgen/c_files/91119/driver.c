#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17232933776525847973ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)9825;
long long int var_7 = -7381075601156127686LL;
unsigned long long int var_9 = 12883492291027956065ULL;
unsigned long long int var_12 = 17378027593198717576ULL;
int zero = 0;
unsigned long long int var_17 = 8647292084943159760ULL;
short var_18 = (short)-7739;
int var_19 = 735089774;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
