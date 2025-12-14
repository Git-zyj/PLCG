#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10181835734824878877ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4240421475792190969ULL;
int zero = 0;
short var_11 = (short)10914;
signed char var_12 = (signed char)89;
long long int var_13 = 3331942161711794371LL;
void init() {
}

void checksum() {
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
