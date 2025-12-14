#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17940;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)60;
long long int var_8 = 7419548355279091055LL;
unsigned long long int var_9 = 2569003365831930220ULL;
signed char var_10 = (signed char)-109;
unsigned long long int var_11 = 1298142978432541900ULL;
unsigned long long int var_15 = 7531803099537780843ULL;
short var_17 = (short)-10639;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
