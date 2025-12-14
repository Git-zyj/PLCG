#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7714573731119731864LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)37;
short var_5 = (short)-31459;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)139;
int var_12 = -855278907;
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
