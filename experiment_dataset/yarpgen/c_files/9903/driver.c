#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-37;
unsigned short var_4 = (unsigned short)46008;
unsigned long long int var_7 = 1014107663326712310ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 17842455177697048415ULL;
unsigned char var_12 = (unsigned char)246;
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
