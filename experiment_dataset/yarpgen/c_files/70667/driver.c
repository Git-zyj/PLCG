#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9044637996736169558LL;
unsigned short var_2 = (unsigned short)5601;
unsigned int var_9 = 4043807477U;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)87;
signed char var_21 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
