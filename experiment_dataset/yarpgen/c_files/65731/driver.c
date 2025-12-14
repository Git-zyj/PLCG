#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned long long int var_2 = 7414772504960547465ULL;
unsigned short var_3 = (unsigned short)55863;
signed char var_4 = (signed char)-109;
unsigned long long int var_5 = 7819034598489510161ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)9278;
unsigned char var_9 = (unsigned char)117;
int zero = 0;
unsigned int var_10 = 1670744920U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)4;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-6;
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
