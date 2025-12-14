#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4098698836673371391LL;
unsigned char var_3 = (unsigned char)117;
unsigned long long int var_5 = 15930337080587772382ULL;
unsigned long long int var_7 = 15217653264873771046ULL;
short var_9 = (short)6301;
long long int var_10 = -396530509323856046LL;
long long int var_11 = 356895269710802132LL;
int zero = 0;
signed char var_12 = (signed char)-65;
unsigned long long int var_13 = 11466593315784886965ULL;
unsigned long long int var_14 = 65053517055956153ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
