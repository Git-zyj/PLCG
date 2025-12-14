#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1410125637541355987LL;
long long int var_5 = -6581995489900377953LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15915631612624833507ULL;
long long int var_11 = -65570536280400594LL;
unsigned short var_12 = (unsigned short)38742;
int zero = 0;
long long int var_13 = -2270568897204059114LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-16159;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
