#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2563;
unsigned int var_1 = 277954008U;
_Bool var_2 = (_Bool)1;
int var_6 = 975120762;
short var_8 = (short)2788;
long long int var_9 = 4227260207518853042LL;
unsigned short var_10 = (unsigned short)45493;
unsigned char var_11 = (unsigned char)234;
unsigned long long int var_12 = 14970302223265574661ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3392580822643003623LL;
short var_16 = (short)6996;
int var_17 = -804285401;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 311581908;
long long int var_20 = -6966242987554845607LL;
int var_21 = -879508514;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
