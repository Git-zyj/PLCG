#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
unsigned int var_2 = 4194776153U;
int var_8 = 306812180;
short var_9 = (short)11228;
unsigned long long int var_10 = 12128345886676929987ULL;
int zero = 0;
signed char var_13 = (signed char)64;
long long int var_14 = -4133579839975150285LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
