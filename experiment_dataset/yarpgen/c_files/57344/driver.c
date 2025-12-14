#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2101399102;
unsigned long long int var_5 = 6563828793273968076ULL;
unsigned long long int var_8 = 2679737854118961708ULL;
unsigned long long int var_10 = 12285522421950878645ULL;
short var_11 = (short)17950;
signed char var_12 = (signed char)27;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 146986279U;
int zero = 0;
short var_16 = (short)12839;
short var_17 = (short)-965;
long long int var_18 = -7516906055116672981LL;
signed char var_19 = (signed char)120;
unsigned char var_20 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
