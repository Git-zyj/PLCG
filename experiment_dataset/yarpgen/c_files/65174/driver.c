#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3931515196403624138ULL;
signed char var_2 = (signed char)-105;
unsigned long long int var_7 = 16015626180867502849ULL;
int var_10 = -1347330983;
signed char var_11 = (signed char)-34;
int zero = 0;
short var_17 = (short)-22960;
short var_18 = (short)17868;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
