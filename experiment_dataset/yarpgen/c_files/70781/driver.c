#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6171108605277694960LL;
int var_7 = -1956837772;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8709299319613513503LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1114175509U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8840979050538363045LL;
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
