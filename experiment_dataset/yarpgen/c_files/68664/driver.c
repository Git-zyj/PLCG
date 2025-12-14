#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 276436969;
unsigned int var_7 = 1644940243U;
signed char var_12 = (signed char)-67;
int zero = 0;
int var_20 = -854013444;
long long int var_21 = -2158523859646894197LL;
signed char var_22 = (signed char)-43;
unsigned int var_23 = 289555984U;
short var_24 = (short)21907;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
