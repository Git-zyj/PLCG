#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8926338763663614797LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 9310661465154689157ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)222;
int var_14 = -336798275;
unsigned long long int var_15 = 15226366522427528551ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
