#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 87659017785542927LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 15585671971157550209ULL;
signed char var_16 = (signed char)-102;
int zero = 0;
signed char var_17 = (signed char)49;
unsigned char var_18 = (unsigned char)125;
unsigned char var_19 = (unsigned char)190;
void init() {
}

void checksum() {
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
