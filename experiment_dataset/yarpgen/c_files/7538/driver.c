#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2784876899U;
long long int var_2 = 5068645776008856513LL;
short var_3 = (short)29638;
short var_9 = (short)21104;
unsigned long long int var_11 = 12360243024445312012ULL;
unsigned short var_12 = (unsigned short)60868;
int zero = 0;
signed char var_13 = (signed char)75;
signed char var_14 = (signed char)-24;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
