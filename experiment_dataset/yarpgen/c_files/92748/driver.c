#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44751;
unsigned long long int var_2 = 12438074305548993692ULL;
long long int var_3 = 1099459665138230726LL;
unsigned int var_5 = 1845875553U;
int var_6 = -937710465;
short var_7 = (short)-1939;
signed char var_10 = (signed char)-118;
long long int var_11 = 7777219090196141802LL;
int zero = 0;
unsigned short var_12 = (unsigned short)47701;
unsigned short var_13 = (unsigned short)40429;
long long int var_14 = 8866113754144851622LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
