#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
signed char var_1 = (signed char)36;
int var_2 = -1234549150;
unsigned int var_5 = 3796273546U;
long long int var_7 = -6997951778432598523LL;
unsigned long long int var_9 = 14860772365115238426ULL;
long long int var_10 = -3545075410312018217LL;
unsigned int var_11 = 3032506266U;
int zero = 0;
int var_12 = -1355754337;
unsigned int var_13 = 2884017896U;
void init() {
}

void checksum() {
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
