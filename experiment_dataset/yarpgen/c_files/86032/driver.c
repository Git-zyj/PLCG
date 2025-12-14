#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
long long int var_1 = -2104494261045650146LL;
unsigned char var_6 = (unsigned char)184;
unsigned int var_9 = 3651641140U;
unsigned long long int var_15 = 3102445633188486005ULL;
int zero = 0;
long long int var_18 = 3832247898601184728LL;
int var_19 = 1850766025;
int var_20 = 1820050050;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
