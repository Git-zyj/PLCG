#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9359863454330967613ULL;
unsigned long long int var_3 = 17592504698031222246ULL;
int var_5 = 1249676124;
long long int var_6 = 8715040069552337946LL;
long long int var_8 = 6651265647441833834LL;
unsigned short var_10 = (unsigned short)23810;
unsigned long long int var_12 = 5234775478997538551ULL;
int zero = 0;
long long int var_14 = 3843533298627128105LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)65188;
unsigned long long int var_17 = 12430795853363965416ULL;
void init() {
}

void checksum() {
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
