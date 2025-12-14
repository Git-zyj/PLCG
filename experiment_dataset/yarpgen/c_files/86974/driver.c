#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2517229797U;
unsigned int var_1 = 2795699389U;
long long int var_3 = -1451496545233416818LL;
short var_6 = (short)-19650;
unsigned short var_8 = (unsigned short)44726;
long long int var_9 = -3504274856074500806LL;
int var_12 = 779486461;
signed char var_14 = (signed char)90;
int var_15 = 1294946034;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -1335452533664824738LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7448886788893917696LL;
long long int var_22 = 4478996504837444229LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
