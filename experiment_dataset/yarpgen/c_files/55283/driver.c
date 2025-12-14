#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
int var_4 = -416861341;
unsigned long long int var_5 = 5653421707394713473ULL;
unsigned char var_6 = (unsigned char)67;
signed char var_7 = (signed char)11;
unsigned long long int var_8 = 8579169513516316749ULL;
unsigned int var_9 = 3856659614U;
unsigned short var_10 = (unsigned short)25749;
unsigned short var_11 = (unsigned short)53238;
unsigned char var_13 = (unsigned char)181;
unsigned int var_14 = 1576745943U;
int zero = 0;
int var_15 = 769097598;
_Bool var_16 = (_Bool)0;
int var_17 = -1497618567;
unsigned short var_18 = (unsigned short)60319;
unsigned short var_19 = (unsigned short)43298;
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
