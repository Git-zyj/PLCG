#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2890332874U;
unsigned short var_5 = (unsigned short)25391;
unsigned int var_6 = 1276591998U;
unsigned short var_7 = (unsigned short)57015;
signed char var_8 = (signed char)-89;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-115;
signed char var_13 = (signed char)43;
int var_15 = 2006021332;
int var_17 = 213150843;
int zero = 0;
unsigned short var_18 = (unsigned short)32180;
unsigned long long int var_19 = 162759553665263005ULL;
long long int var_20 = -7199814602954010024LL;
unsigned short var_21 = (unsigned short)27491;
short var_22 = (short)-16478;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
