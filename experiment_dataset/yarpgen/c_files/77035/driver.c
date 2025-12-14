#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3853276406329395221LL;
signed char var_2 = (signed char)38;
signed char var_8 = (signed char)-77;
unsigned short var_9 = (unsigned short)52851;
unsigned char var_10 = (unsigned char)33;
long long int var_12 = -1594495917919713848LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
signed char var_15 = (signed char)2;
long long int var_16 = 7340498878859753926LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
