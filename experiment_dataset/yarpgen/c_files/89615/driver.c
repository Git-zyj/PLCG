#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 89598643016259148LL;
signed char var_2 = (signed char)4;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 5912009925932732862ULL;
unsigned long long int var_7 = 8621310062089192025ULL;
long long int var_8 = 7530151988329312415LL;
int zero = 0;
unsigned long long int var_10 = 5883849427984369930ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
