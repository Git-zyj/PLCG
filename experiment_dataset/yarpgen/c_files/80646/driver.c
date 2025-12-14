#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29603;
unsigned long long int var_4 = 14829825962328024547ULL;
short var_5 = (short)15507;
long long int var_7 = 5094719471986240279LL;
int var_10 = 1708808203;
int zero = 0;
unsigned short var_11 = (unsigned short)3818;
_Bool var_12 = (_Bool)0;
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
