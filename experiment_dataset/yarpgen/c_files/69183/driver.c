#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -378268507;
unsigned int var_2 = 3889983669U;
int var_3 = 78343395;
unsigned int var_4 = 3008343162U;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)34;
int zero = 0;
long long int var_11 = -6312736652407901234LL;
long long int var_12 = 7136389840936283529LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
