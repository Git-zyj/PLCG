#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 819039597;
_Bool var_7 = (_Bool)1;
long long int var_8 = 8263554167681282373LL;
short var_10 = (short)-10745;
int zero = 0;
signed char var_12 = (signed char)-56;
int var_13 = 1881112637;
unsigned int var_14 = 2480887136U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
