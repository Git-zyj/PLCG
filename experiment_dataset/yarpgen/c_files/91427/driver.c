#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
_Bool var_2 = (_Bool)1;
long long int var_3 = -4056520497942511564LL;
long long int var_4 = -6083922362393196701LL;
unsigned char var_5 = (unsigned char)108;
long long int var_8 = -5702792655762561257LL;
int zero = 0;
int var_10 = 850891005;
short var_11 = (short)-11969;
short var_12 = (short)32004;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
