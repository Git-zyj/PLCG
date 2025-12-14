#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)76;
signed char var_3 = (signed char)76;
int var_4 = -1758632327;
int var_6 = 1518626952;
unsigned char var_7 = (unsigned char)168;
signed char var_10 = (signed char)-104;
int zero = 0;
signed char var_20 = (signed char)92;
signed char var_21 = (signed char)39;
void init() {
}

void checksum() {
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
