#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8643719907444810792LL;
long long int var_1 = 1665344979682191257LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)51;
short var_4 = (short)29770;
unsigned long long int var_5 = 12032456518703942357ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)18130;
unsigned int var_9 = 2335751839U;
unsigned char var_10 = (unsigned char)237;
short var_11 = (short)7173;
long long int var_12 = -7264348679596122347LL;
int zero = 0;
int var_13 = 1342729780;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-21;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
