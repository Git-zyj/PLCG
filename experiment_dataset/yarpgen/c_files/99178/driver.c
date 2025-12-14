#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4279046109271121191ULL;
short var_4 = (short)-30826;
short var_8 = (short)2834;
long long int var_9 = 7906394784525964379LL;
unsigned int var_12 = 2070077463U;
unsigned short var_13 = (unsigned short)25414;
int zero = 0;
long long int var_15 = 7749485788309333283LL;
unsigned long long int var_16 = 3892750442037991470ULL;
long long int var_17 = 1327426905095250887LL;
unsigned int var_18 = 1285850428U;
unsigned short var_19 = (unsigned short)29373;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
