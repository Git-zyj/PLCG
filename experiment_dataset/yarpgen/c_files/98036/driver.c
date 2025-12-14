#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9070335629387014881LL;
signed char var_1 = (signed char)47;
unsigned char var_2 = (unsigned char)97;
unsigned char var_5 = (unsigned char)31;
signed char var_6 = (signed char)-84;
unsigned long long int var_7 = 8547516024148651984ULL;
unsigned int var_8 = 7214470U;
unsigned int var_9 = 2155293878U;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
unsigned int var_11 = 3515345963U;
unsigned short var_12 = (unsigned short)29602;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
