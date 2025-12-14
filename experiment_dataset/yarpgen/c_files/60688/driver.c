#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18416776639130311774ULL;
unsigned short var_4 = (unsigned short)29764;
unsigned short var_9 = (unsigned short)56632;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-39;
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
