#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned long long int var_2 = 13457066578880757107ULL;
unsigned char var_3 = (unsigned char)251;
long long int var_4 = -7643677883618790020LL;
unsigned int var_5 = 4074707009U;
unsigned long long int var_7 = 15617097430723035173ULL;
unsigned char var_8 = (unsigned char)41;
long long int var_9 = 5537450626497335806LL;
int zero = 0;
long long int var_10 = 6321646373822243812LL;
short var_11 = (short)16064;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)801;
unsigned long long int var_14 = 15497080795090783272ULL;
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
