#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16717294828981046625ULL;
signed char var_3 = (signed char)-107;
signed char var_4 = (signed char)-105;
long long int var_5 = -7209949609011456980LL;
signed char var_6 = (signed char)101;
int zero = 0;
signed char var_11 = (signed char)91;
long long int var_12 = -5225252853323586115LL;
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
