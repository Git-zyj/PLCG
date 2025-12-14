#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8600285466029901977LL;
unsigned long long int var_1 = 17249650329757550138ULL;
unsigned short var_2 = (unsigned short)15519;
_Bool var_3 = (_Bool)1;
long long int var_8 = -5255280465875945446LL;
unsigned long long int var_9 = 16152042664193995046ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3796896943132351711LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
