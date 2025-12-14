#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3604100011U;
signed char var_4 = (signed char)56;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2988260549159933010LL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)31050;
short var_13 = (short)26827;
int zero = 0;
signed char var_16 = (signed char)34;
signed char var_17 = (signed char)-58;
unsigned int var_18 = 1861500704U;
signed char var_19 = (signed char)64;
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
