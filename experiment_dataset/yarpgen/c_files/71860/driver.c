#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15288;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16344120227121539152ULL;
int zero = 0;
unsigned long long int var_11 = 5769835451591575776ULL;
unsigned char var_12 = (unsigned char)57;
short var_13 = (short)-11675;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
