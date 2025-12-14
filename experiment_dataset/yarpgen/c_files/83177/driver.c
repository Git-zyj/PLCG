#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4429940646483882729LL;
signed char var_2 = (signed char)68;
unsigned short var_4 = (unsigned short)30611;
int var_6 = -977575860;
int var_15 = 755774630;
unsigned short var_16 = (unsigned short)47033;
int zero = 0;
long long int var_19 = 1189486564409960079LL;
int var_20 = 550888691;
long long int var_21 = -8223930102396142801LL;
void init() {
}

void checksum() {
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
