#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_7 = -683637434;
long long int var_10 = 2125306103598439829LL;
short var_13 = (short)-25325;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5235114807429072644ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
