#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3432801566U;
unsigned char var_4 = (unsigned char)18;
unsigned long long int var_6 = 44783544663214015ULL;
unsigned long long int var_7 = 15222225770292845043ULL;
unsigned int var_9 = 1941250136U;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -673415348;
unsigned int var_12 = 2891743877U;
unsigned int var_13 = 3949286533U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
