#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1099064191331347708LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 7253694227317670970ULL;
int zero = 0;
long long int var_10 = -48684768793920LL;
short var_11 = (short)3296;
int var_12 = -1472013342;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
