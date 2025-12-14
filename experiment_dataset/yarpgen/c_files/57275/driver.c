#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5008287142943903282LL;
unsigned char var_2 = (unsigned char)89;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8631882378371268051ULL;
unsigned short var_5 = (unsigned short)46638;
int var_6 = -421914352;
long long int var_7 = 3303410496593112737LL;
int var_8 = -976969974;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 2110042506793595684LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
