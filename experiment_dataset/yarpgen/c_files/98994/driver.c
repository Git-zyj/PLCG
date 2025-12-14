#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22341;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2308259613U;
signed char var_9 = (signed char)-29;
unsigned long long int var_11 = 15098779366217901830ULL;
int zero = 0;
int var_12 = 298308115;
signed char var_13 = (signed char)109;
unsigned char var_14 = (unsigned char)243;
unsigned int var_15 = 285810629U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
