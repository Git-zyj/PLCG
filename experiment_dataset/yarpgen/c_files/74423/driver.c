#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7818299703178976485LL;
signed char var_1 = (signed char)-56;
unsigned long long int var_2 = 1958803351363545730ULL;
int var_3 = 787646487;
unsigned long long int var_4 = 5605009029949463428ULL;
unsigned int var_7 = 1599873161U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-24176;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7083795007914496161ULL;
short var_13 = (short)-1121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
