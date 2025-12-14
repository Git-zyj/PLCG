#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31519;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3430677227U;
unsigned int var_9 = 1277210799U;
long long int var_12 = -8367503905228123478LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16957811870369242720ULL;
unsigned int var_15 = 3383888756U;
short var_16 = (short)9750;
signed char var_17 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
