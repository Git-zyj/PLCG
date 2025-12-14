#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20848;
unsigned char var_3 = (unsigned char)218;
unsigned char var_4 = (unsigned char)48;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)38137;
long long int var_7 = 8950382735461063849LL;
unsigned long long int var_9 = 17870220339735913538ULL;
_Bool var_10 = (_Bool)0;
signed char var_16 = (signed char)97;
int zero = 0;
int var_18 = 347497865;
signed char var_19 = (signed char)76;
_Bool var_20 = (_Bool)1;
long long int var_21 = 712760720153836118LL;
unsigned short var_22 = (unsigned short)17385;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
