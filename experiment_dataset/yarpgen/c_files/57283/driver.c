#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3719907566289466478LL;
unsigned int var_1 = 3612777049U;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)57296;
unsigned char var_4 = (unsigned char)110;
signed char var_5 = (signed char)-79;
signed char var_7 = (signed char)-21;
unsigned char var_9 = (unsigned char)186;
signed char var_10 = (signed char)26;
int zero = 0;
short var_11 = (short)358;
long long int var_12 = -2149338975420164295LL;
signed char var_13 = (signed char)-57;
unsigned int var_14 = 2314237996U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
