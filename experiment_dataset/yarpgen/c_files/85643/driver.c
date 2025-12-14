#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)13612;
int var_8 = 1089290492;
int var_10 = -565019054;
int zero = 0;
unsigned short var_13 = (unsigned short)38709;
int var_14 = 1001245084;
unsigned long long int var_15 = 7978586876455798451ULL;
signed char var_16 = (signed char)0;
signed char var_17 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
