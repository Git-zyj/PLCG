#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14750473518915553476ULL;
int var_4 = 1216545319;
unsigned short var_6 = (unsigned short)34602;
unsigned int var_7 = 71758667U;
int zero = 0;
long long int var_10 = -3997321749963587235LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6006720165117874960ULL;
short var_13 = (short)-8158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
