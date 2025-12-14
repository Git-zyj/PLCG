#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5675775540293137746LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -432646089621906273LL;
short var_3 = (short)7703;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 16720773630638717547ULL;
unsigned short var_13 = (unsigned short)62641;
unsigned long long int var_15 = 8463776947059473695ULL;
int zero = 0;
short var_18 = (short)-30461;
int var_19 = -722568483;
unsigned char var_20 = (unsigned char)181;
int var_21 = 854091509;
_Bool var_22 = (_Bool)1;
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
