#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
_Bool var_2 = (_Bool)0;
short var_6 = (short)8314;
unsigned char var_7 = (unsigned char)169;
signed char var_8 = (signed char)88;
long long int var_9 = -6842075419425584268LL;
int zero = 0;
signed char var_10 = (signed char)70;
unsigned long long int var_11 = 11822384352339396317ULL;
unsigned char var_12 = (unsigned char)172;
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
