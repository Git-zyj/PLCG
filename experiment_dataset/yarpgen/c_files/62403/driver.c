#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2011820176756848823LL;
unsigned char var_6 = (unsigned char)71;
short var_8 = (short)14531;
short var_10 = (short)-14257;
int zero = 0;
unsigned int var_18 = 4286206232U;
long long int var_19 = 2655370531136210984LL;
unsigned int var_20 = 72257394U;
short var_21 = (short)-9259;
unsigned char var_22 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
