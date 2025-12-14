#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9510499632242454900ULL;
long long int var_1 = 2017309699070500548LL;
short var_3 = (short)-546;
unsigned long long int var_6 = 11603595390093633817ULL;
int zero = 0;
unsigned long long int var_13 = 16690137581201024719ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1869878731547908468LL;
unsigned long long int var_16 = 1313419189271053159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
