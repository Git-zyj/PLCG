#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6004339421929309040LL;
long long int var_5 = -8228923174570538130LL;
unsigned int var_7 = 2037411530U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2934934451U;
int zero = 0;
unsigned int var_13 = 1706713683U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2090821932971215073LL;
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
