#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15109108441198337291ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7409513169230979687ULL;
int zero = 0;
signed char var_19 = (signed char)-110;
signed char var_20 = (signed char)89;
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
