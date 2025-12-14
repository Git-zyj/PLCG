#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9827344273349353400ULL;
signed char var_6 = (signed char)-31;
unsigned long long int var_9 = 10134438748161972727ULL;
long long int var_11 = -4497957633483104543LL;
unsigned int var_14 = 4069216112U;
signed char var_16 = (signed char)-27;
int var_17 = -225027869;
signed char var_18 = (signed char)61;
long long int var_19 = -493908596849999085LL;
int zero = 0;
unsigned int var_20 = 2847550114U;
unsigned int var_21 = 2779136281U;
unsigned long long int var_22 = 15828644226987701487ULL;
void init() {
}

void checksum() {
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
