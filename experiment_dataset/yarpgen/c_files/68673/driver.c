#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9200192425005259687ULL;
short var_5 = (short)6615;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4519196270879178083ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
unsigned long long int var_18 = 6468609928447159446ULL;
void init() {
}

void checksum() {
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
