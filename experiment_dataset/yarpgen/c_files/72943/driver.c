#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -48871054;
short var_3 = (short)2009;
short var_5 = (short)27903;
unsigned int var_7 = 579058226U;
unsigned int var_11 = 671495793U;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-121;
int var_16 = -501294862;
unsigned long long int var_19 = 18445048171225397386ULL;
int zero = 0;
unsigned long long int var_20 = 5642643138645667772ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
