#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1803361454;
int var_1 = -78892953;
int var_3 = 333884707;
unsigned short var_4 = (unsigned short)2106;
signed char var_5 = (signed char)-56;
int zero = 0;
int var_13 = 103360820;
unsigned short var_14 = (unsigned short)15657;
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
