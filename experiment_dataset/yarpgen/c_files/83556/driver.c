#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22953;
unsigned int var_1 = 1965857242U;
_Bool var_5 = (_Bool)1;
int var_6 = -1162932701;
signed char var_8 = (signed char)98;
int var_9 = -1665154312;
unsigned short var_12 = (unsigned short)17779;
int zero = 0;
unsigned int var_15 = 2272687390U;
unsigned int var_16 = 1463712602U;
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
