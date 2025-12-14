#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15908;
long long int var_5 = -1556782063034509903LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3283921231187852539LL;
unsigned long long int var_10 = 15083373842785448512ULL;
int var_13 = -1491668795;
short var_14 = (short)-1574;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)15891;
long long int var_18 = -1021574299478283975LL;
int var_19 = -512642366;
void init() {
}

void checksum() {
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
