#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_9 = (short)-2975;
unsigned int var_12 = 2978918895U;
int var_13 = 2103266808;
unsigned long long int var_15 = 9869362091352543093ULL;
unsigned int var_16 = 3993659890U;
_Bool var_17 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 8764575833741255809LL;
unsigned int var_21 = 1946123247U;
short var_22 = (short)31753;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 11279627354569845472ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
