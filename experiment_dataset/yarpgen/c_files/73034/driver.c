#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2484900169551076468LL;
int var_9 = 1391063884;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_13 = 1730894806;
signed char var_14 = (signed char)-29;
long long int var_15 = -4034842763244675319LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
