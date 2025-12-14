#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16221;
short var_4 = (short)-20888;
unsigned int var_7 = 4063531281U;
long long int var_8 = -5929395365794718139LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 4229519548U;
_Bool var_13 = (_Bool)0;
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
