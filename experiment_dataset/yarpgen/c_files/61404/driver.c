#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -7144174301186638055LL;
unsigned long long int var_14 = 13529216147734032528ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1885598542809947674LL;
signed char var_19 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
