#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 480547013U;
short var_1 = (short)1728;
int var_2 = -1189106634;
unsigned char var_3 = (unsigned char)191;
unsigned short var_4 = (unsigned short)28016;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2381113679U;
int var_9 = -529695580;
signed char var_10 = (signed char)-6;
int zero = 0;
long long int var_12 = -1610047997792112004LL;
unsigned char var_13 = (unsigned char)210;
unsigned int var_14 = 1520891008U;
unsigned int var_15 = 410177832U;
long long int var_16 = 3216177171497731181LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
