#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21651;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 9522486730270894380ULL;
unsigned short var_12 = (unsigned short)31814;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 1687354425035239318ULL;
unsigned short var_21 = (unsigned short)45170;
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
