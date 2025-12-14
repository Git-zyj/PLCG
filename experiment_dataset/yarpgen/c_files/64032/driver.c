#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11162;
unsigned int var_1 = 2208068029U;
unsigned long long int var_5 = 15060308444233394019ULL;
int var_7 = 830948421;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)31171;
int var_13 = -1225042458;
signed char var_14 = (signed char)-52;
int zero = 0;
int var_16 = 1212869826;
long long int var_17 = 9209155549112848718LL;
int var_18 = -1231551462;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)15391;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
