#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned char var_4 = (unsigned char)138;
signed char var_9 = (signed char)-97;
unsigned char var_10 = (unsigned char)124;
int zero = 0;
unsigned long long int var_19 = 16080171291461489070ULL;
unsigned short var_20 = (unsigned short)58770;
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
