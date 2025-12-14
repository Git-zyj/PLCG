#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1109441091271348987LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 10794852918746742902ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = -4175629877160741775LL;
signed char var_22 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
