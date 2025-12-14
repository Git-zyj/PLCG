#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -31102659;
unsigned long long int var_2 = 3421974300337557618ULL;
long long int var_9 = 6924312756617560757LL;
int zero = 0;
int var_19 = 1296413414;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
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
