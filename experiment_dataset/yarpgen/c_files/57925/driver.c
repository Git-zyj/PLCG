#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -353941777760220860LL;
int var_2 = -1048818964;
unsigned long long int var_3 = 15370575198736258641ULL;
short var_4 = (short)12754;
int var_6 = -1119742545;
int var_7 = 187997903;
unsigned short var_9 = (unsigned short)57043;
unsigned short var_10 = (unsigned short)30220;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13182974455116555638ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = -1433654140;
short var_16 = (short)6939;
unsigned int var_17 = 4244861060U;
unsigned long long int var_18 = 2681096164035487285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
