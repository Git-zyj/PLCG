#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
unsigned int var_6 = 934902081U;
int var_7 = -2060831120;
long long int var_9 = 2242644126017171331LL;
long long int var_12 = 648819987102558960LL;
int var_14 = 223761689;
long long int var_18 = 1499048876084864804LL;
int zero = 0;
unsigned short var_20 = (unsigned short)58300;
unsigned long long int var_21 = 12330724315437239343ULL;
signed char var_22 = (signed char)16;
unsigned short var_23 = (unsigned short)12019;
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
