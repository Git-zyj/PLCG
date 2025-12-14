#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10420700092844582656ULL;
unsigned long long int var_4 = 10452935141222149707ULL;
long long int var_11 = 3176765116683626705LL;
int zero = 0;
signed char var_16 = (signed char)-49;
short var_17 = (short)-16021;
unsigned char var_18 = (unsigned char)56;
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
