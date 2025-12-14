#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
unsigned int var_8 = 2078615711U;
unsigned long long int var_10 = 8422297371825580894ULL;
_Bool var_15 = (_Bool)0;
signed char var_18 = (signed char)20;
int zero = 0;
unsigned int var_19 = 1968638061U;
signed char var_20 = (signed char)-95;
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
