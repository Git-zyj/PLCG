#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20759;
int var_3 = 1930071099;
unsigned short var_4 = (unsigned short)63535;
unsigned long long int var_5 = 16668060948485848703ULL;
long long int var_6 = 1843524269212405061LL;
unsigned short var_7 = (unsigned short)52729;
short var_8 = (short)9990;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 6604897120689748777ULL;
long long int var_14 = -716706881223986221LL;
int zero = 0;
long long int var_15 = -1030953784991658169LL;
unsigned long long int var_16 = 465178494382932567ULL;
unsigned int var_17 = 3641554633U;
long long int var_18 = 5370135281046144254LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
