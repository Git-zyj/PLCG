#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1375399032;
unsigned int var_7 = 2734789270U;
int var_14 = 221931704;
unsigned int var_18 = 1190981907U;
int zero = 0;
signed char var_19 = (signed char)-39;
long long int var_20 = 2941939549361808852LL;
long long int var_21 = 3799391565764380110LL;
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
