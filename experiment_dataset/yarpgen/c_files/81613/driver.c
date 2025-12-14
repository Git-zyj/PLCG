#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2822025533093191311LL;
long long int var_7 = -8028026738035824153LL;
unsigned long long int var_11 = 13219534907398540567ULL;
unsigned int var_14 = 861421909U;
unsigned short var_16 = (unsigned short)26162;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 513010355U;
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
