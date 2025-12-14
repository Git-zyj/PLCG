#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -768947676120641053LL;
long long int var_5 = -8186254945051102039LL;
int zero = 0;
unsigned short var_10 = (unsigned short)29549;
unsigned long long int var_11 = 4010432452497579170ULL;
short var_12 = (short)15864;
signed char var_13 = (signed char)-22;
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
