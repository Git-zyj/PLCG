#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
unsigned int var_1 = 1187541631U;
long long int var_3 = 4386650115593369314LL;
signed char var_4 = (signed char)53;
short var_5 = (short)24673;
signed char var_6 = (signed char)-15;
unsigned int var_7 = 1144368666U;
signed char var_8 = (signed char)-114;
unsigned int var_9 = 1566554084U;
int zero = 0;
unsigned long long int var_10 = 17139846913548728580ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)202;
_Bool var_13 = (_Bool)0;
long long int var_14 = -361695213135942872LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
