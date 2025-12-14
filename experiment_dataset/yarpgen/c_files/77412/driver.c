#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4483786625879909201ULL;
unsigned long long int var_4 = 10603906764066410396ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_19 = 3606442958584585473LL;
unsigned char var_20 = (unsigned char)106;
void init() {
}

void checksum() {
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
