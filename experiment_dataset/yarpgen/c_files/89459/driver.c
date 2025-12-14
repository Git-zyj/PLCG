#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 19419897U;
unsigned short var_3 = (unsigned short)49985;
unsigned int var_4 = 3229410630U;
short var_5 = (short)-31306;
unsigned long long int var_6 = 10180458409202728256ULL;
signed char var_7 = (signed char)-30;
unsigned int var_8 = 1424932989U;
unsigned long long int var_9 = 14348248435408947154ULL;
long long int var_10 = 3768021880559497013LL;
unsigned int var_11 = 1237234828U;
signed char var_12 = (signed char)105;
unsigned long long int var_13 = 10429653576989844234ULL;
int zero = 0;
short var_14 = (short)-23735;
unsigned long long int var_15 = 11749992365299876630ULL;
unsigned int var_16 = 1053969728U;
unsigned long long int var_17 = 7575573665692594497ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
