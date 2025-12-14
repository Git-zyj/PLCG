#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7430521047316821205LL;
unsigned long long int var_5 = 8020210052052946581ULL;
signed char var_10 = (signed char)111;
unsigned int var_11 = 1868513586U;
unsigned int var_13 = 3237611624U;
int var_14 = 474079652;
long long int var_15 = 4828598423044858899LL;
unsigned int var_17 = 3482122234U;
int zero = 0;
unsigned int var_18 = 3994356281U;
int var_19 = -640948020;
unsigned short var_20 = (unsigned short)17843;
unsigned int var_21 = 3934912601U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
