#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-3195;
long long int var_10 = -8610143763758176282LL;
unsigned int var_11 = 4091760930U;
unsigned long long int var_17 = 7509480863050914283ULL;
int zero = 0;
int var_18 = -1432671975;
long long int var_19 = -3167226459441489436LL;
unsigned long long int var_20 = 8800496515211031480ULL;
unsigned int var_21 = 761995877U;
long long int var_22 = -297323094290956140LL;
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
