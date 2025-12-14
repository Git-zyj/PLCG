#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned char var_3 = (unsigned char)168;
unsigned char var_6 = (unsigned char)210;
unsigned char var_8 = (unsigned char)114;
long long int var_14 = 2893405934712200681LL;
int zero = 0;
long long int var_19 = 6644332404776045334LL;
long long int var_20 = 1990599791706526126LL;
long long int var_21 = -6030971083654838987LL;
unsigned char var_22 = (unsigned char)68;
void init() {
}

void checksum() {
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
