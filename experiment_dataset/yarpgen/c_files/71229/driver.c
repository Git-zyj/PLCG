#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1921226971;
signed char var_4 = (signed char)99;
long long int var_5 = 5312151050758359255LL;
unsigned long long int var_9 = 9877950498269469189ULL;
signed char var_11 = (signed char)-120;
int zero = 0;
unsigned long long int var_14 = 13675873344627293563ULL;
unsigned short var_15 = (unsigned short)37502;
int var_16 = 509627953;
unsigned long long int var_17 = 3848104390571221143ULL;
unsigned long long int var_18 = 16644495872802964363ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
