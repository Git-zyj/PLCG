#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -589541297;
_Bool var_3 = (_Bool)0;
short var_7 = (short)-861;
short var_8 = (short)-31592;
short var_9 = (short)-10259;
long long int var_11 = 2581256892158869306LL;
int zero = 0;
unsigned char var_13 = (unsigned char)32;
long long int var_14 = -9024073702082292233LL;
long long int var_15 = 6235552529996436642LL;
signed char var_16 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
