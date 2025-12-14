#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)9964;
long long int var_2 = 2933619436938756679LL;
unsigned int var_3 = 2554035696U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)61856;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -1827884883;
int var_9 = -359383184;
int zero = 0;
int var_10 = 979222332;
int var_11 = 210418585;
long long int var_12 = -457846341507961984LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
