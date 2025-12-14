#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14330;
_Bool var_2 = (_Bool)0;
long long int var_3 = -334573881039956680LL;
short var_5 = (short)11353;
long long int var_6 = 429103402882977977LL;
unsigned int var_12 = 2866979111U;
unsigned char var_14 = (unsigned char)181;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 130713987U;
int var_18 = 1264548001;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1951135680810302109LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
