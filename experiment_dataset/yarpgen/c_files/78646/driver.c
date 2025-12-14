#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14101886090535046993ULL;
unsigned long long int var_7 = 5381844095771602968ULL;
unsigned int var_8 = 2325703477U;
int zero = 0;
unsigned long long int var_10 = 13287609734194565054ULL;
unsigned char var_11 = (unsigned char)17;
short var_12 = (short)14900;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
