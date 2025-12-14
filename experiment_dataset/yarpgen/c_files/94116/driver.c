#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13025478192079791254ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)42241;
int var_4 = 842601069;
long long int var_7 = -4826957060151005215LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23245;
int zero = 0;
unsigned short var_13 = (unsigned short)53757;
short var_14 = (short)-19471;
unsigned long long int var_15 = 4146773149252413066ULL;
unsigned short var_16 = (unsigned short)5879;
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
