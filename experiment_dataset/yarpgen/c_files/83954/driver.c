#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7792838814134457875ULL;
unsigned int var_9 = 2605534814U;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)61211;
int zero = 0;
long long int var_19 = -8459482463303134118LL;
unsigned long long int var_20 = 2968110383820227977ULL;
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
