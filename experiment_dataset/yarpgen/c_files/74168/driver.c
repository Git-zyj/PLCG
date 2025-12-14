#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11737451667119749802ULL;
unsigned long long int var_9 = 9461574978531214892ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-118;
int zero = 0;
short var_16 = (short)-20591;
long long int var_17 = 1519990519276756033LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
