#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11978;
int var_7 = 1435486662;
int var_8 = -1069032629;
unsigned int var_9 = 469737616U;
long long int var_10 = 6217894488656883580LL;
long long int var_11 = 558622818280164679LL;
int var_13 = -314801907;
signed char var_15 = (signed char)-88;
int var_17 = 801992767;
long long int var_18 = -1138535317768539354LL;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
short var_20 = (short)-17911;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
