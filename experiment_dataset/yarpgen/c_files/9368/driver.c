#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -909472177;
unsigned short var_3 = (unsigned short)9296;
int var_7 = -2126525659;
int var_9 = -815391877;
signed char var_10 = (signed char)37;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 16133936550969716131ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
