#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1870998451;
_Bool var_7 = (_Bool)1;
unsigned short var_13 = (unsigned short)31335;
unsigned long long int var_14 = 10308743173035735752ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)60419;
unsigned short var_17 = (unsigned short)150;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35465;
unsigned short var_20 = (unsigned short)51852;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
