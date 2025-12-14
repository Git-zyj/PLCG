#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2349;
unsigned char var_8 = (unsigned char)147;
int var_10 = 63067474;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)39293;
unsigned short var_20 = (unsigned short)52838;
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
