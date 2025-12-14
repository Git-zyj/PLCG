#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11475694692519326838ULL;
long long int var_6 = 2701714323314182609LL;
long long int var_9 = 6340971725393713367LL;
long long int var_10 = 9186198760694965024LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_14 = 1212048775;
unsigned long long int var_15 = 12296009559288116540ULL;
int zero = 0;
short var_16 = (short)29633;
unsigned short var_17 = (unsigned short)58707;
signed char var_18 = (signed char)88;
signed char var_19 = (signed char)-77;
long long int var_20 = -7435399765806072943LL;
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
