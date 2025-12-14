#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1458041020;
_Bool var_6 = (_Bool)0;
long long int var_10 = -1501933846400341697LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-19;
int var_13 = 1973580873;
long long int var_14 = 7054668415757491339LL;
void init() {
}

void checksum() {
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
