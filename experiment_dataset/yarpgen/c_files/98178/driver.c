#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11249967202779727505ULL;
long long int var_1 = -1133970798535768674LL;
short var_2 = (short)26301;
unsigned long long int var_3 = 3821321543474524169ULL;
long long int var_4 = 8552489845062989758LL;
long long int var_7 = -4247612644884709923LL;
unsigned short var_11 = (unsigned short)5463;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 395327611131994062ULL;
int zero = 0;
long long int var_17 = -7741331880867217676LL;
long long int var_18 = 8328902255138205647LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
