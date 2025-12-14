#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1128401006U;
signed char var_1 = (signed char)52;
unsigned int var_2 = 3466350170U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 29668900U;
unsigned int var_5 = 2105266698U;
unsigned char var_6 = (unsigned char)156;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)184;
int zero = 0;
short var_11 = (short)-30636;
long long int var_12 = -3710347144772832859LL;
short var_13 = (short)-3938;
unsigned long long int var_14 = 5099756017727455248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
