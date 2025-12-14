#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13759680791879149325ULL;
long long int var_2 = -7956357434613655260LL;
unsigned char var_8 = (unsigned char)22;
unsigned char var_15 = (unsigned char)177;
int zero = 0;
unsigned long long int var_19 = 11886358846219206440ULL;
unsigned long long int var_20 = 15149232896846575235ULL;
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
