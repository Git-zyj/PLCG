#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4335;
short var_6 = (short)-18566;
long long int var_9 = -3699767135714005750LL;
short var_10 = (short)-13908;
int zero = 0;
signed char var_15 = (signed char)-7;
unsigned long long int var_16 = 14899148076990025195ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
