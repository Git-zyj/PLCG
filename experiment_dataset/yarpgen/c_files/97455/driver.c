#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
long long int var_2 = 6186336576030709793LL;
int var_3 = 36980818;
signed char var_4 = (signed char)-87;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 730203439U;
unsigned long long int var_8 = 14550453232989471722ULL;
unsigned int var_9 = 3037817130U;
int zero = 0;
unsigned short var_10 = (unsigned short)43464;
unsigned long long int var_11 = 16591244415203136821ULL;
unsigned short var_12 = (unsigned short)46986;
short var_13 = (short)-2582;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
