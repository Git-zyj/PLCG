#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2639999094U;
long long int var_2 = -7850384966174825925LL;
unsigned int var_3 = 351166090U;
unsigned int var_4 = 2963990926U;
unsigned long long int var_6 = 11777141306304366130ULL;
int zero = 0;
short var_10 = (short)19612;
signed char var_11 = (signed char)35;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)27670;
unsigned short var_14 = (unsigned short)65416;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
