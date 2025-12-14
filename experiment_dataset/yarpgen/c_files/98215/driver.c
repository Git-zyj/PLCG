#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3153971815U;
short var_6 = (short)32427;
_Bool var_7 = (_Bool)0;
short var_10 = (short)17225;
int zero = 0;
unsigned int var_12 = 2704096668U;
unsigned long long int var_13 = 15458079901875797641ULL;
int var_14 = -1495245160;
void init() {
}

void checksum() {
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
