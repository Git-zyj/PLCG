#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2172890738U;
long long int var_5 = -1306940463162907567LL;
unsigned char var_6 = (unsigned char)223;
unsigned short var_7 = (unsigned short)34516;
short var_13 = (short)11286;
int zero = 0;
unsigned int var_16 = 1100731894U;
unsigned long long int var_17 = 6246805548409810696ULL;
short var_18 = (short)22972;
unsigned char var_19 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
