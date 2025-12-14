#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64814;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 15985180166910688117ULL;
unsigned int var_7 = 3404295519U;
short var_10 = (short)-24578;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11118933752350573805ULL;
long long int var_14 = -3190291061052809679LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
