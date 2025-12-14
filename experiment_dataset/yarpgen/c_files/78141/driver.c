#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3489136191U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)85;
long long int var_4 = -5268761978676435661LL;
signed char var_6 = (signed char)36;
short var_7 = (short)-997;
long long int var_8 = 2965911357630688232LL;
unsigned char var_9 = (unsigned char)176;
int var_10 = 2010429015;
int zero = 0;
unsigned short var_11 = (unsigned short)867;
unsigned char var_12 = (unsigned char)197;
unsigned long long int var_13 = 10868132919652908192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
