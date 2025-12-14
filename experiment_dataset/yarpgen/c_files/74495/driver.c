#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5435480598722081546ULL;
unsigned short var_2 = (unsigned short)19741;
long long int var_3 = -2363203086012817991LL;
unsigned long long int var_4 = 8993482075788911105ULL;
unsigned short var_11 = (unsigned short)54;
signed char var_12 = (signed char)25;
int zero = 0;
unsigned char var_13 = (unsigned char)40;
long long int var_14 = -8262177635136156976LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
