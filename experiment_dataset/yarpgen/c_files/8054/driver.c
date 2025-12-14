#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -309582521;
unsigned long long int var_4 = 7083617625798883465ULL;
signed char var_6 = (signed char)100;
int var_9 = -1474982797;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -2110055157;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1856014203324772089LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
