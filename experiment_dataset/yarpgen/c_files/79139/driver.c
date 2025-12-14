#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1062167028;
int var_4 = -16772905;
int var_6 = 172840369;
int var_8 = -1715127964;
unsigned long long int var_11 = 4519616606327245127ULL;
int zero = 0;
int var_17 = -915771215;
unsigned long long int var_18 = 4651413776496747830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
