#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17515294767666996870ULL;
short var_8 = (short)19899;
int var_11 = 1513438411;
unsigned short var_15 = (unsigned short)8026;
unsigned long long int var_17 = 1710344680043792574ULL;
int zero = 0;
long long int var_19 = -2090456263379632259LL;
unsigned short var_20 = (unsigned short)27586;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
