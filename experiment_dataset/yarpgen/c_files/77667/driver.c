#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4060058405U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1234310525U;
unsigned int var_14 = 194670848U;
int zero = 0;
unsigned int var_19 = 2326571656U;
long long int var_20 = -8594160223172550383LL;
signed char var_21 = (signed char)93;
unsigned long long int var_22 = 6552204872071416546ULL;
void init() {
}

void checksum() {
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
