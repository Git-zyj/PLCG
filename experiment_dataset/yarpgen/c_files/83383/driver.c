#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3580962888U;
int var_4 = -519923827;
unsigned long long int var_6 = 3660206959257106742ULL;
unsigned int var_12 = 3610158673U;
int zero = 0;
long long int var_18 = 6742927535886403147LL;
int var_19 = 336758165;
unsigned short var_20 = (unsigned short)65193;
long long int var_21 = -6098308044119345369LL;
int var_22 = -1995698373;
short var_23 = (short)-23862;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
