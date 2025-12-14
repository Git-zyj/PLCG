#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21385;
unsigned long long int var_3 = 13424123222081861019ULL;
unsigned short var_4 = (unsigned short)60202;
unsigned short var_6 = (unsigned short)6626;
unsigned char var_7 = (unsigned char)233;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 14534280829316873452ULL;
unsigned int var_13 = 2131095711U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
