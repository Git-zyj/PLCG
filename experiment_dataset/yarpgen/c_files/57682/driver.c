#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40031;
short var_4 = (short)-12189;
long long int var_5 = 2659312432672300138LL;
unsigned int var_7 = 4027444192U;
unsigned short var_8 = (unsigned short)32375;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4998810705889457047ULL;
long long int var_13 = -463971538313099653LL;
void init() {
}

void checksum() {
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
