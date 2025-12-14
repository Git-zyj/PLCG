#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16640;
unsigned short var_3 = (unsigned short)37752;
short var_4 = (short)15952;
unsigned short var_9 = (unsigned short)55244;
unsigned short var_10 = (unsigned short)54338;
signed char var_11 = (signed char)44;
short var_12 = (short)24156;
unsigned short var_13 = (unsigned short)56385;
unsigned long long int var_14 = 10825126364288866583ULL;
_Bool var_16 = (_Bool)0;
signed char var_19 = (signed char)-36;
int zero = 0;
int var_20 = -1618687517;
unsigned short var_21 = (unsigned short)31312;
unsigned short var_22 = (unsigned short)55266;
void init() {
}

void checksum() {
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
