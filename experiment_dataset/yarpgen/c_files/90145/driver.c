#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1226053774;
unsigned long long int var_4 = 15485146448996068043ULL;
unsigned char var_5 = (unsigned char)230;
signed char var_8 = (signed char)31;
signed char var_9 = (signed char)-127;
int var_10 = -1367777194;
int var_11 = 674019673;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43955;
void init() {
}

void checksum() {
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
