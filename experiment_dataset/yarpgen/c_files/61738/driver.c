#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7075;
unsigned short var_6 = (unsigned short)48676;
long long int var_8 = -89952164678305424LL;
short var_14 = (short)12552;
_Bool var_15 = (_Bool)1;
short var_19 = (short)-31130;
int zero = 0;
unsigned long long int var_20 = 18021348939067118051ULL;
unsigned long long int var_21 = 4682147616855290439ULL;
short var_22 = (short)18966;
unsigned long long int var_23 = 7218827688513987820ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
