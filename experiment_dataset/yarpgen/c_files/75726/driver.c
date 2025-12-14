#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4154260137U;
unsigned char var_1 = (unsigned char)44;
unsigned int var_5 = 3877280366U;
unsigned int var_6 = 4276703666U;
unsigned int var_7 = 1107593299U;
unsigned int var_8 = 2399503448U;
unsigned long long int var_9 = 2945368266273470539ULL;
unsigned int var_10 = 2873909533U;
unsigned long long int var_11 = 12255138192949334681ULL;
unsigned char var_12 = (unsigned char)154;
unsigned int var_13 = 2065850541U;
unsigned long long int var_14 = 17060123272406602422ULL;
unsigned int var_16 = 4076109711U;
int zero = 0;
unsigned long long int var_17 = 5168211514694404301ULL;
unsigned long long int var_18 = 15138379727994688099ULL;
unsigned int var_19 = 3676229555U;
long long int var_20 = -4011321038151499988LL;
unsigned char var_21 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
