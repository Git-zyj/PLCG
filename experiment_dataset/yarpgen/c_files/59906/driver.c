#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12658;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 16541193899818520879ULL;
long long int var_4 = 689907704577617690LL;
long long int var_5 = -737574701912286664LL;
short var_6 = (short)26449;
long long int var_7 = -2342180150103990653LL;
long long int var_8 = 483203664157029690LL;
signed char var_9 = (signed char)80;
int zero = 0;
unsigned int var_12 = 3638661732U;
long long int var_13 = -4392640208840461226LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
