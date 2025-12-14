#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38900;
unsigned short var_1 = (unsigned short)19258;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)31198;
int zero = 0;
int var_10 = -932088454;
unsigned short var_11 = (unsigned short)63697;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4386100438094054240LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
