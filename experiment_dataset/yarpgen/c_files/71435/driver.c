#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1609927707075730925LL;
long long int var_3 = -3654761477288881913LL;
int var_4 = 90642403;
int var_5 = -870079788;
int var_6 = 1829127388;
short var_8 = (short)-9245;
int zero = 0;
int var_20 = 1145803986;
long long int var_21 = -6919721700720698089LL;
void init() {
}

void checksum() {
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
