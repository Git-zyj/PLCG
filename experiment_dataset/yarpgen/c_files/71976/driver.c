#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 18139699730930059098ULL;
int var_10 = 100767175;
int var_12 = 1509414661;
unsigned long long int var_13 = 14408696758490956519ULL;
signed char var_15 = (signed char)91;
int zero = 0;
unsigned long long int var_19 = 1518750563003076287ULL;
unsigned long long int var_20 = 665815473872589960ULL;
signed char var_21 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
