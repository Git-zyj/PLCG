#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1112515189;
int var_7 = -1299414650;
int var_8 = 1710660591;
int var_9 = -110918369;
int zero = 0;
int var_10 = 450214321;
int var_11 = -1205392150;
int var_12 = -1633815470;
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
