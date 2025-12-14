#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned long long int var_3 = 349957184857052521ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 10003015442048407842ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-16;
signed char var_11 = (signed char)-52;
long long int var_12 = -1649917904410497879LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
