#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13566;
unsigned short var_5 = (unsigned short)49821;
signed char var_6 = (signed char)-30;
unsigned long long int var_7 = 11130488925025018693ULL;
int var_9 = -1510909747;
unsigned short var_12 = (unsigned short)33931;
unsigned long long int var_13 = 2893543845099422060ULL;
unsigned int var_14 = 618756082U;
int zero = 0;
int var_16 = 644518591;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-4;
signed char var_19 = (signed char)109;
void init() {
}

void checksum() {
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
