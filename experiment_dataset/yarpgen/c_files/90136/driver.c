#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2040535041;
int var_6 = -2025902168;
unsigned short var_9 = (unsigned short)51906;
int zero = 0;
unsigned char var_10 = (unsigned char)218;
unsigned long long int var_11 = 14273366849100755629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
