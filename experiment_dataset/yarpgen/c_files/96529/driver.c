#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20770;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)84;
short var_6 = (short)18888;
unsigned int var_9 = 949853637U;
unsigned short var_10 = (unsigned short)47739;
signed char var_11 = (signed char)-19;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
signed char var_13 = (signed char)-14;
unsigned int var_14 = 3777935832U;
_Bool var_15 = (_Bool)1;
long long int var_16 = 8345178668704484570LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
