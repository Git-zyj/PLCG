#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)19;
int var_7 = 1480891160;
unsigned short var_8 = (unsigned short)52770;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-19006;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)54795;
unsigned long long int var_15 = 3878620747085965238ULL;
long long int var_16 = -5757503590976898941LL;
unsigned long long int var_17 = 12885499687955175200ULL;
unsigned long long int var_18 = 16645868678850875434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
