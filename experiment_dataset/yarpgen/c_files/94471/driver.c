#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned long long int var_1 = 6890155329072880439ULL;
_Bool var_2 = (_Bool)0;
int var_3 = 1173692715;
unsigned long long int var_4 = 4045579752652066023ULL;
unsigned long long int var_6 = 1692427034231614596ULL;
short var_7 = (short)-26779;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1129608612U;
long long int var_10 = 6802981028851042372LL;
unsigned long long int var_12 = 8496826542698316650ULL;
int var_13 = -1039182645;
unsigned short var_14 = (unsigned short)1053;
unsigned int var_15 = 16920375U;
int zero = 0;
unsigned char var_16 = (unsigned char)153;
unsigned long long int var_17 = 347066270741735391ULL;
long long int var_18 = 8754586274685267763LL;
unsigned char var_19 = (unsigned char)143;
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
