#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62679;
unsigned int var_8 = 411524119U;
unsigned int var_10 = 1903925009U;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_20 = (short)12454;
unsigned short var_21 = (unsigned short)53039;
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
