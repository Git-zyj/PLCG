#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
signed char var_3 = (signed char)-1;
long long int var_7 = 7858473349218992968LL;
unsigned long long int var_9 = 15510410841913021046ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-123;
int var_12 = 904537447;
void init() {
}

void checksum() {
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
