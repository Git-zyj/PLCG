#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2171137340577129629LL;
int var_1 = 217903872;
long long int var_3 = 14346159643077557LL;
unsigned short var_10 = (unsigned short)46103;
long long int var_12 = -3274844399504285766LL;
long long int var_14 = -9068193720963234560LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 296682959;
long long int var_17 = 6216607528786111262LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
