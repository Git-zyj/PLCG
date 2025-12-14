#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2871763780420418198LL;
unsigned long long int var_1 = 11953655779159292127ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -3506312792856403099LL;
short var_8 = (short)31852;
int zero = 0;
unsigned long long int var_10 = 3035817896629202948ULL;
unsigned long long int var_11 = 7860469925151041549ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
