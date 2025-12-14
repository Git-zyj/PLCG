#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1099617794;
unsigned long long int var_4 = 13708772900502935912ULL;
unsigned short var_10 = (unsigned short)39086;
int zero = 0;
long long int var_12 = 6705168055951901316LL;
unsigned long long int var_13 = 13950714221328551874ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
