#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1734004181;
long long int var_6 = 2408742973989030030LL;
unsigned long long int var_7 = 84222129452788458ULL;
unsigned short var_12 = (unsigned short)62028;
unsigned short var_14 = (unsigned short)4050;
int zero = 0;
int var_15 = -114101104;
unsigned short var_16 = (unsigned short)18120;
signed char var_17 = (signed char)70;
signed char var_18 = (signed char)98;
long long int var_19 = 4993880599658674420LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
