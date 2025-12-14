#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13911;
long long int var_8 = -1540140792995896252LL;
short var_9 = (short)31746;
unsigned char var_10 = (unsigned char)116;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-25292;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 8130202704517292179ULL;
unsigned long long int var_16 = 8483050864583443400ULL;
unsigned long long int var_17 = 1863081027745047878ULL;
long long int var_18 = -3321284567959082267LL;
int var_19 = 86734924;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
