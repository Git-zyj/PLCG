#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
signed char var_6 = (signed char)37;
unsigned int var_9 = 834545970U;
signed char var_13 = (signed char)-24;
unsigned long long int var_16 = 4689437489903952205ULL;
int zero = 0;
short var_19 = (short)-5385;
_Bool var_20 = (_Bool)0;
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
