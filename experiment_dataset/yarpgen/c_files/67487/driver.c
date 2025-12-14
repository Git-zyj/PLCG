#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1636416095586542685LL;
unsigned long long int var_3 = 11451433317321791319ULL;
long long int var_4 = 2678702712204137260LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)179;
short var_8 = (short)-23877;
signed char var_9 = (signed char)-92;
unsigned short var_10 = (unsigned short)13067;
int zero = 0;
unsigned char var_11 = (unsigned char)235;
unsigned char var_12 = (unsigned char)58;
signed char var_13 = (signed char)-55;
void init() {
}

void checksum() {
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
