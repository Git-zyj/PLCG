#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
unsigned int var_3 = 3538785696U;
unsigned char var_4 = (unsigned char)186;
signed char var_5 = (signed char)10;
signed char var_8 = (signed char)73;
unsigned int var_11 = 3830885334U;
int zero = 0;
signed char var_12 = (signed char)-62;
long long int var_13 = -8786396925946589506LL;
void init() {
}

void checksum() {
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
