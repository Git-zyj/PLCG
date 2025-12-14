#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5061680767955976267LL;
signed char var_6 = (signed char)-80;
unsigned int var_7 = 1256754309U;
short var_9 = (short)4609;
int zero = 0;
int var_10 = -1266736487;
unsigned int var_11 = 3069975686U;
signed char var_12 = (signed char)9;
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
