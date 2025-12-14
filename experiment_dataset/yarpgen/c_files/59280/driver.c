#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
unsigned long long int var_4 = 2154278429387290451ULL;
unsigned short var_6 = (unsigned short)61418;
signed char var_9 = (signed char)-122;
int var_12 = -1743651282;
int zero = 0;
unsigned short var_15 = (unsigned short)39453;
unsigned char var_16 = (unsigned char)230;
void init() {
}

void checksum() {
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
