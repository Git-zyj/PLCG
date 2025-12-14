#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6426531911452811094LL;
short var_3 = (short)4348;
signed char var_4 = (signed char)-119;
int var_7 = 1934673275;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)82;
unsigned short var_13 = (unsigned short)25814;
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
