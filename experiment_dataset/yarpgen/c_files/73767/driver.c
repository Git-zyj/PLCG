#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13287078646874025195ULL;
unsigned char var_3 = (unsigned char)144;
int var_7 = 2027006307;
_Bool var_15 = (_Bool)1;
unsigned long long int var_19 = 11811168197076957243ULL;
int zero = 0;
int var_20 = -1946451057;
long long int var_21 = 3671196557243558092LL;
signed char var_22 = (signed char)-17;
int var_23 = -1569159657;
unsigned short var_24 = (unsigned short)14457;
long long int var_25 = 8158768045792354580LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
