#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8804722956318233029LL;
long long int var_2 = 4264443041486659644LL;
unsigned int var_3 = 856945106U;
int var_7 = -1668512622;
unsigned long long int var_8 = 16570567803402456568ULL;
int var_11 = -1590863436;
unsigned char var_15 = (unsigned char)175;
int var_16 = -1035672036;
int zero = 0;
long long int var_17 = -6189655750486747939LL;
short var_18 = (short)3411;
int var_19 = -1032193362;
void init() {
}

void checksum() {
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
