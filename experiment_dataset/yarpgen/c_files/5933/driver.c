#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)113;
unsigned short var_5 = (unsigned short)27818;
unsigned long long int var_13 = 11842162720600836586ULL;
int zero = 0;
signed char var_19 = (signed char)115;
unsigned long long int var_20 = 7838602229522381960ULL;
unsigned long long int var_21 = 17278940958475483948ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
