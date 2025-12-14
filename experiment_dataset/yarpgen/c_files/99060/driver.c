#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1776534989;
unsigned long long int var_2 = 14561568924960881056ULL;
signed char var_4 = (signed char)-47;
unsigned long long int var_6 = 12309360717237203116ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7661495767208381087ULL;
short var_10 = (short)-29502;
int var_11 = -1345574313;
unsigned char var_14 = (unsigned char)147;
unsigned long long int var_16 = 4737941659027411907ULL;
int zero = 0;
int var_18 = 2015691797;
long long int var_19 = -3397956595718234214LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6955027526977181927LL;
int var_22 = -2135172370;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
