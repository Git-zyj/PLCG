#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1791408222;
long long int var_3 = -8893264126308271199LL;
unsigned char var_7 = (unsigned char)169;
int var_8 = 832929530;
short var_11 = (short)28954;
int zero = 0;
unsigned long long int var_15 = 9832124773227928696ULL;
unsigned short var_16 = (unsigned short)56897;
long long int var_17 = -8184217398326227015LL;
long long int var_18 = 6529683252947354351LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
