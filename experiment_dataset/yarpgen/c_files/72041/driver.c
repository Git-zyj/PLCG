#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8189918593032409550ULL;
short var_1 = (short)-7926;
short var_3 = (short)25530;
short var_4 = (short)-14881;
unsigned int var_5 = 3227003443U;
unsigned short var_6 = (unsigned short)12078;
short var_7 = (short)9773;
signed char var_8 = (signed char)72;
unsigned char var_10 = (unsigned char)26;
int zero = 0;
short var_11 = (short)15417;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 18153093645083685035ULL;
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
