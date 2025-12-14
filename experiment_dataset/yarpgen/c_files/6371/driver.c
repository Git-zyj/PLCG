#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5467189581679801040ULL;
unsigned long long int var_2 = 14070352879332758422ULL;
unsigned long long int var_3 = 2121938783393297242ULL;
long long int var_11 = -1099770509544651167LL;
unsigned long long int var_12 = 2969008798016352618ULL;
int zero = 0;
unsigned long long int var_16 = 6531655990587268396ULL;
unsigned short var_17 = (unsigned short)64823;
long long int var_18 = -3689620811686275657LL;
void init() {
}

void checksum() {
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
