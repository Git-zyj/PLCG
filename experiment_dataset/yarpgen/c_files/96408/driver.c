#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -1970673863;
signed char var_6 = (signed char)-52;
unsigned long long int var_10 = 16494488531241668794ULL;
unsigned char var_11 = (unsigned char)142;
unsigned long long int var_13 = 16309602796020765971ULL;
unsigned int var_14 = 921697820U;
unsigned long long int var_16 = 9768718736331012113ULL;
int var_18 = -1663240510;
int zero = 0;
short var_20 = (short)21142;
unsigned short var_21 = (unsigned short)51548;
int var_22 = -320042245;
unsigned long long int var_23 = 628273028948643159ULL;
unsigned short var_24 = (unsigned short)39451;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
