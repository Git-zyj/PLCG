#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17957739287676622796ULL;
long long int var_2 = -6036185917679008026LL;
int var_3 = 1279917374;
unsigned long long int var_4 = 1327536143597279550ULL;
unsigned int var_5 = 990858590U;
int var_7 = -1748675071;
unsigned short var_8 = (unsigned short)37543;
unsigned int var_11 = 316354634U;
int zero = 0;
long long int var_12 = -2901389908872843309LL;
unsigned long long int var_13 = 6240962578472023784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
