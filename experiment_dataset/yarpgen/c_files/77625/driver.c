#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-28;
signed char var_10 = (signed char)105;
signed char var_12 = (signed char)-90;
unsigned long long int var_15 = 2707122483779713319ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)32824;
unsigned char var_19 = (unsigned char)128;
int var_20 = -774379248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
