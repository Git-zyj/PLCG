#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned short var_1 = (unsigned short)64073;
signed char var_3 = (signed char)-9;
unsigned long long int var_4 = 8129078436598888683ULL;
unsigned short var_7 = (unsigned short)39707;
int zero = 0;
unsigned long long int var_10 = 17546820663412195636ULL;
signed char var_11 = (signed char)-118;
long long int var_12 = 4263114001475479852LL;
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
