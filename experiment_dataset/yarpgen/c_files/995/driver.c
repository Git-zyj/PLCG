#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3297934048U;
_Bool var_7 = (_Bool)0;
long long int var_9 = -685864962879493429LL;
short var_11 = (short)4752;
int zero = 0;
unsigned short var_12 = (unsigned short)61846;
short var_13 = (short)21574;
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
