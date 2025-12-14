#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 193670823179106259ULL;
int var_1 = 1746601987;
unsigned short var_2 = (unsigned short)46145;
unsigned long long int var_3 = 3815591375910249042ULL;
long long int var_5 = -5480580062296331392LL;
long long int var_6 = 870154592297729871LL;
unsigned char var_8 = (unsigned char)10;
long long int var_12 = 75573746358829990LL;
int var_14 = 1487046379;
int var_16 = -1789272476;
int zero = 0;
long long int var_17 = 397098868497792329LL;
unsigned long long int var_18 = 13304102093872353829ULL;
int var_19 = -1170776591;
int var_20 = -1975410472;
unsigned long long int var_21 = 8065529336280263285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
