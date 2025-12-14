#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4453654573613254232LL;
unsigned short var_4 = (unsigned short)38486;
short var_7 = (short)-23801;
unsigned long long int var_8 = 17899612407752493501ULL;
unsigned long long int var_10 = 5549674804048974761ULL;
short var_11 = (short)9995;
unsigned short var_13 = (unsigned short)48706;
long long int var_16 = -3520119360359919903LL;
int var_17 = 1629450493;
int zero = 0;
unsigned short var_19 = (unsigned short)34767;
long long int var_20 = -9065620358538856274LL;
void init() {
}

void checksum() {
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
