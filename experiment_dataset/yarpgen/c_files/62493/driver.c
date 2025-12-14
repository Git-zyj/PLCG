#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)234;
signed char var_2 = (signed char)-7;
unsigned char var_3 = (unsigned char)50;
long long int var_6 = 5263219196540560687LL;
unsigned char var_8 = (unsigned char)74;
unsigned char var_9 = (unsigned char)253;
unsigned long long int var_11 = 6867364262918473951ULL;
signed char var_12 = (signed char)3;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-19006;
long long int var_17 = 7871680417888382551LL;
int zero = 0;
signed char var_19 = (signed char)-80;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7184165632797861670LL;
int var_22 = 382253746;
int var_23 = -1242156404;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
