#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4226260115520858109LL;
signed char var_2 = (signed char)105;
signed char var_6 = (signed char)121;
_Bool var_8 = (_Bool)0;
long long int var_9 = -4432479289985017748LL;
unsigned short var_10 = (unsigned short)5558;
signed char var_11 = (signed char)-41;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)39149;
unsigned long long int var_15 = 238283155573995433ULL;
long long int var_16 = 5728755447036950217LL;
signed char var_17 = (signed char)34;
int zero = 0;
unsigned int var_19 = 1387954707U;
long long int var_20 = 7612679729794312354LL;
long long int var_21 = 2305424476768019683LL;
unsigned long long int var_22 = 11917525204986081501ULL;
unsigned char var_23 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
