#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 749667408U;
unsigned int var_2 = 3847069249U;
unsigned short var_4 = (unsigned short)16678;
unsigned int var_5 = 4261269618U;
unsigned int var_7 = 905383464U;
long long int var_8 = -1324655473047479642LL;
long long int var_11 = -2240243613538290956LL;
unsigned int var_15 = 3663689700U;
unsigned short var_16 = (unsigned short)31213;
int zero = 0;
unsigned int var_18 = 2346300001U;
long long int var_19 = 5944355770469848948LL;
unsigned int var_20 = 3405792941U;
unsigned int var_21 = 372196621U;
unsigned int var_22 = 117495758U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
