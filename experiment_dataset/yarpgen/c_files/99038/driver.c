#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5460271395933376552ULL;
long long int var_3 = 4659841784244071198LL;
signed char var_4 = (signed char)-73;
int var_6 = 2132770300;
long long int var_8 = -4853233984110389362LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12606218428499957567ULL;
unsigned short var_12 = (unsigned short)33847;
unsigned long long int var_13 = 18100156512007909714ULL;
long long int var_14 = 1829024542636635884LL;
unsigned long long int var_15 = 9392524925272931388ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)35717;
unsigned long long int var_17 = 7971121698614725133ULL;
unsigned int var_18 = 3762781166U;
int var_19 = -375775599;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
