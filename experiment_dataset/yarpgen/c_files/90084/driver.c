#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -756573784;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)220;
unsigned short var_4 = (unsigned short)22267;
unsigned long long int var_6 = 9969676453166175764ULL;
unsigned long long int var_7 = 17340332694502219405ULL;
signed char var_8 = (signed char)48;
unsigned int var_9 = 3654216031U;
long long int var_13 = 1990735584383636005LL;
int var_14 = -841466358;
short var_15 = (short)-1511;
unsigned long long int var_17 = 13037530211455088468ULL;
int zero = 0;
unsigned long long int var_18 = 9875138649766970522ULL;
long long int var_19 = 831459666247384505LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
