#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 806011057U;
short var_3 = (short)-16417;
unsigned long long int var_5 = 197268837561041243ULL;
long long int var_6 = -6639511081978318316LL;
unsigned int var_7 = 3885761156U;
unsigned char var_9 = (unsigned char)169;
int var_13 = -677620415;
unsigned long long int var_16 = 8666094217954618438ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)11877;
int var_18 = 1089945928;
long long int var_19 = -5763380245031687339LL;
void init() {
}

void checksum() {
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
