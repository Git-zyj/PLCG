#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)163;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)41873;
long long int var_6 = -5545453563908661927LL;
int zero = 0;
signed char var_11 = (signed char)-77;
unsigned char var_12 = (unsigned char)4;
void init() {
}

void checksum() {
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
