#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 633793419U;
unsigned long long int var_5 = 3301295227966724298ULL;
short var_8 = (short)14932;
signed char var_9 = (signed char)109;
long long int var_10 = -5030391848536738248LL;
unsigned int var_11 = 1119498781U;
signed char var_12 = (signed char)78;
unsigned char var_14 = (unsigned char)236;
int zero = 0;
long long int var_19 = 6353767287747676769LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1802043866U;
signed char var_22 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
