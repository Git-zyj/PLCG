#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned char var_3 = (unsigned char)217;
int var_5 = -1072382561;
unsigned char var_14 = (unsigned char)248;
int zero = 0;
unsigned short var_18 = (unsigned short)58491;
long long int var_19 = 4497352591647848017LL;
unsigned char var_20 = (unsigned char)121;
long long int var_21 = 5939377987383079550LL;
void init() {
}

void checksum() {
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
