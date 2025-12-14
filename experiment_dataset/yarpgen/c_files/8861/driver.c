#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3292146934468833164ULL;
unsigned long long int var_3 = 13864514096475444370ULL;
int var_4 = 947139346;
short var_5 = (short)-15407;
unsigned long long int var_6 = 9783219331083106125ULL;
unsigned char var_12 = (unsigned char)90;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5192949738246072702ULL;
int var_16 = 1050724879;
_Bool var_17 = (_Bool)1;
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
