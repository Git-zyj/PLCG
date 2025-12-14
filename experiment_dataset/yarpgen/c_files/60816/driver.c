#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5410226642453112097LL;
long long int var_2 = -5725359504078283247LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -7969042729596888506LL;
short var_5 = (short)19718;
int var_7 = 477129504;
unsigned long long int var_8 = 16000784416327759645ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 18425064391771376118ULL;
short var_14 = (short)14564;
void init() {
}

void checksum() {
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
