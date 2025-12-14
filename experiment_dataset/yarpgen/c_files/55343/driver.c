#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12719621209601685476ULL;
int var_1 = 561189573;
unsigned long long int var_2 = 18148561921003723475ULL;
_Bool var_3 = (_Bool)0;
short var_8 = (short)-2312;
unsigned long long int var_11 = 14384380610636563539ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
_Bool var_14 = (_Bool)0;
short var_15 = (short)4329;
long long int var_16 = -7942033361587820793LL;
signed char var_17 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
