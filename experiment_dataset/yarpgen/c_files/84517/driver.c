#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6382;
unsigned char var_4 = (unsigned char)131;
long long int var_6 = -1356458618267839925LL;
unsigned long long int var_9 = 15466089965664566298ULL;
signed char var_11 = (signed char)68;
unsigned long long int var_13 = 16876248511411698616ULL;
signed char var_15 = (signed char)58;
int zero = 0;
int var_16 = -776947263;
unsigned long long int var_17 = 16275772680444262871ULL;
signed char var_18 = (signed char)18;
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
