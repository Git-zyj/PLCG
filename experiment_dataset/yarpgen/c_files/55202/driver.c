#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1525728742;
int var_5 = -1375514571;
unsigned long long int var_17 = 4635672998070529164ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)21657;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)23710;
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
