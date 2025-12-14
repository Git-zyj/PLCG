#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8174;
unsigned short var_4 = (unsigned short)6916;
unsigned long long int var_5 = 2494244236317116763ULL;
int var_10 = -1902697789;
long long int var_13 = 2036913523676729214LL;
short var_18 = (short)12800;
int var_19 = -1707480222;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3389509042314577009ULL;
short var_22 = (short)16572;
long long int var_23 = 6754232314712553021LL;
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
