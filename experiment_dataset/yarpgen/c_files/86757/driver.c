#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26600;
long long int var_4 = 1302101878727480911LL;
unsigned long long int var_6 = 17270587428929544415ULL;
_Bool var_9 = (_Bool)0;
short var_14 = (short)-3656;
int zero = 0;
unsigned long long int var_16 = 2321779738393285248ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
