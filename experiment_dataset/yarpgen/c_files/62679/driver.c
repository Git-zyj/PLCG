#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10419;
long long int var_1 = 8168109999801736532LL;
int var_4 = 1914183774;
signed char var_8 = (signed char)-102;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)96;
unsigned long long int var_12 = 2277327002529352656ULL;
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
