#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13192304647553566266ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11434265732740953517ULL;
unsigned long long int var_6 = 1346099407435256378ULL;
long long int var_7 = -3403951774264029128LL;
unsigned char var_10 = (unsigned char)7;
unsigned char var_11 = (unsigned char)172;
long long int var_13 = -6686272465598554971LL;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
unsigned char var_18 = (unsigned char)81;
signed char var_19 = (signed char)117;
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
