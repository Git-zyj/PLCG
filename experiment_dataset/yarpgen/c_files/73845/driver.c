#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
unsigned char var_6 = (unsigned char)92;
unsigned char var_7 = (unsigned char)163;
unsigned char var_10 = (unsigned char)63;
signed char var_13 = (signed char)98;
int zero = 0;
unsigned long long int var_19 = 16507402134866736580ULL;
unsigned long long int var_20 = 5062529087593564459ULL;
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
