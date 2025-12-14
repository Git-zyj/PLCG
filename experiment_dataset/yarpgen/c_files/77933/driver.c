#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3040;
unsigned short var_3 = (unsigned short)37507;
long long int var_4 = -8087212627614939343LL;
long long int var_5 = -1085362109489112335LL;
unsigned int var_7 = 2149892220U;
unsigned short var_8 = (unsigned short)17261;
unsigned char var_9 = (unsigned char)153;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-23;
unsigned int var_15 = 3943971310U;
unsigned short var_16 = (unsigned short)4234;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1513365752U;
signed char var_19 = (signed char)-45;
long long int var_20 = 7759759085093994525LL;
unsigned short var_21 = (unsigned short)47861;
long long int var_22 = 1433746953532129932LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
