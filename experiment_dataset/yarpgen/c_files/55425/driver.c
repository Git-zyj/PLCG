#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1423751881318645766ULL;
unsigned char var_7 = (unsigned char)212;
int var_9 = -1832296062;
int var_12 = -1759586806;
unsigned long long int var_13 = 13309221003777161815ULL;
int zero = 0;
long long int var_16 = -4327088405057057410LL;
unsigned long long int var_17 = 15017217056404103930ULL;
void init() {
}

void checksum() {
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
