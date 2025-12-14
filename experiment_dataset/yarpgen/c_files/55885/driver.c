#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
unsigned char var_4 = (unsigned char)188;
unsigned long long int var_5 = 9956615221925436645ULL;
unsigned char var_10 = (unsigned char)116;
signed char var_11 = (signed char)-105;
int zero = 0;
signed char var_13 = (signed char)107;
unsigned long long int var_14 = 10323478013295314380ULL;
short var_15 = (short)-31082;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
