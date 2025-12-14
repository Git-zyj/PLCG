#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3453534488U;
unsigned int var_3 = 1117130549U;
int zero = 0;
unsigned short var_19 = (unsigned short)52057;
unsigned short var_20 = (unsigned short)34064;
unsigned long long int var_21 = 13535263672562221475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
