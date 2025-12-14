#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28529;
unsigned long long int var_2 = 13307120097654285944ULL;
unsigned int var_3 = 172185610U;
long long int var_4 = -1329481877436672326LL;
unsigned char var_10 = (unsigned char)209;
signed char var_12 = (signed char)67;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = -524277583;
short var_18 = (short)14833;
unsigned char var_19 = (unsigned char)243;
void init() {
}

void checksum() {
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
