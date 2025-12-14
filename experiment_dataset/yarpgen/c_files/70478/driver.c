#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13230710241708294205ULL;
int var_9 = -2139379345;
unsigned short var_10 = (unsigned short)28937;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 14856096779939992476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
