#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -161416645;
long long int var_1 = 5701134222388955967LL;
_Bool var_3 = (_Bool)1;
int var_5 = -991975001;
unsigned int var_6 = 3605082651U;
unsigned short var_7 = (unsigned short)51259;
unsigned int var_9 = 1611300329U;
long long int var_11 = -1268297676734757138LL;
int zero = 0;
unsigned char var_13 = (unsigned char)144;
unsigned short var_14 = (unsigned short)10950;
unsigned char var_15 = (unsigned char)199;
unsigned long long int var_16 = 2293316883619696965ULL;
signed char var_17 = (signed char)-22;
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
