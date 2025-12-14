#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4045;
unsigned long long int var_10 = 4008869517189149550ULL;
unsigned short var_14 = (unsigned short)61868;
short var_17 = (short)-11436;
int zero = 0;
unsigned short var_19 = (unsigned short)51324;
short var_20 = (short)-5783;
unsigned short var_21 = (unsigned short)64235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
