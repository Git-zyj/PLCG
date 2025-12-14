#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10967860562131837963ULL;
int var_1 = 184829306;
int var_2 = -1390969200;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)33617;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1045341335U;
_Bool var_12 = (_Bool)0;
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
