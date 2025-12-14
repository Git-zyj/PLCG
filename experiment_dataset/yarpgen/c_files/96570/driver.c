#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)17348;
_Bool var_7 = (_Bool)1;
int var_8 = -428583986;
_Bool var_10 = (_Bool)1;
int var_14 = -1877358764;
int zero = 0;
short var_19 = (short)17230;
signed char var_20 = (signed char)65;
unsigned int var_21 = 1500984853U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
