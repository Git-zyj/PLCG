#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -103483851096593105LL;
signed char var_13 = (signed char)-58;
signed char var_15 = (signed char)10;
int zero = 0;
unsigned short var_16 = (unsigned short)8115;
unsigned char var_17 = (unsigned char)108;
unsigned long long int var_18 = 7042769155427950578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
