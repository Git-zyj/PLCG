#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17699715665510613726ULL;
unsigned short var_5 = (unsigned short)10895;
unsigned short var_11 = (unsigned short)56042;
int zero = 0;
int var_20 = -2143328249;
long long int var_21 = 4711631009577959398LL;
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
