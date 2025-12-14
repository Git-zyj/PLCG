#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13502022713431710660ULL;
unsigned long long int var_8 = 13834990609434862412ULL;
signed char var_9 = (signed char)100;
short var_11 = (short)-27924;
int zero = 0;
short var_14 = (short)26681;
_Bool var_15 = (_Bool)0;
int var_16 = -704203700;
unsigned short var_17 = (unsigned short)56966;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
