#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21391;
short var_3 = (short)27834;
signed char var_4 = (signed char)101;
short var_9 = (short)15179;
signed char var_10 = (signed char)-52;
int var_13 = -1846940393;
long long int var_14 = 5447799357661183690LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)26296;
int var_18 = -1150660455;
short var_19 = (short)-22604;
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
