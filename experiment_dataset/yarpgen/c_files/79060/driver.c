#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60934;
signed char var_5 = (signed char)-57;
unsigned char var_8 = (unsigned char)206;
long long int var_9 = 5380708759145655733LL;
unsigned long long int var_11 = 7006819363150286063ULL;
int zero = 0;
unsigned int var_18 = 901435922U;
long long int var_19 = 5366869163181025972LL;
unsigned int var_20 = 1083513818U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
