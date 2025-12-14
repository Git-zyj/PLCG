#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -8210203826726063038LL;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)23;
short var_9 = (short)6107;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7965933067390260299LL;
long long int var_16 = -4735158302457204824LL;
int zero = 0;
unsigned int var_18 = 692559451U;
unsigned int var_19 = 1959433153U;
void init() {
}

void checksum() {
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
