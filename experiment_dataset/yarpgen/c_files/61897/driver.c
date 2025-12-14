#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8893335934899132735LL;
long long int var_5 = -7253729150055480500LL;
unsigned long long int var_6 = 6629309328133256527ULL;
long long int var_7 = 3853893402286932062LL;
long long int var_8 = 5340240733598519381LL;
signed char var_13 = (signed char)112;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)65;
int var_21 = 1104680805;
long long int var_22 = 6108662528976524596LL;
void init() {
}

void checksum() {
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
