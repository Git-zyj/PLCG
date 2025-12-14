#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned long long int var_3 = 15905708394588816858ULL;
long long int var_8 = -3961768521992251133LL;
short var_10 = (short)29051;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -2329944849351308105LL;
signed char var_15 = (signed char)-91;
void init() {
}

void checksum() {
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
