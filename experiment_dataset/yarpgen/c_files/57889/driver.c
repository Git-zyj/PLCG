#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2743700055U;
unsigned short var_4 = (unsigned short)11910;
short var_6 = (short)25916;
int var_10 = 1239238693;
int zero = 0;
unsigned long long int var_11 = 18366449734931966903ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7161017636656645105LL;
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
