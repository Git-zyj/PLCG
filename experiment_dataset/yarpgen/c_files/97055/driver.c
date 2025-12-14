#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12402813002111603599ULL;
int var_2 = 1723262053;
int var_5 = -1692923270;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-58;
signed char var_14 = (signed char)-33;
unsigned long long int var_15 = 4598251683149138904ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
