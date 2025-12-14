#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned short var_1 = (unsigned short)26201;
int var_3 = -1666659167;
unsigned short var_4 = (unsigned short)57446;
long long int var_5 = -240436222541239280LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)161;
signed char var_9 = (signed char)115;
unsigned char var_11 = (unsigned char)99;
int var_15 = -792445587;
unsigned long long int var_17 = 10106900663590685595ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned char var_19 = (unsigned char)94;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
