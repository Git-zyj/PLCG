#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9507;
unsigned long long int var_8 = 13264325115878511604ULL;
long long int var_17 = 8587237717740233222LL;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9256;
unsigned short var_21 = (unsigned short)8252;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
