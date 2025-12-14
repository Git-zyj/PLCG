#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3510069920451140137LL;
long long int var_6 = 7872115937352154478LL;
signed char var_7 = (signed char)-112;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-46;
long long int var_10 = 2710213266581234237LL;
unsigned short var_11 = (unsigned short)9014;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_18 = (short)3000;
int var_19 = -773736705;
signed char var_20 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
