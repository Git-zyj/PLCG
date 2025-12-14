#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3058605434U;
short var_2 = (short)28582;
unsigned int var_4 = 1428518461U;
unsigned int var_10 = 3715226427U;
unsigned int var_11 = 965190914U;
unsigned int var_13 = 1312165305U;
unsigned short var_14 = (unsigned short)26435;
short var_15 = (short)872;
int zero = 0;
unsigned int var_17 = 304367160U;
long long int var_18 = -95750774673922543LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
