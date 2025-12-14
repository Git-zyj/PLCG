#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52851;
unsigned long long int var_2 = 4420932804891178181ULL;
unsigned short var_4 = (unsigned short)53101;
unsigned long long int var_5 = 5346005459156246007ULL;
unsigned long long int var_7 = 3488094429951584739ULL;
unsigned short var_8 = (unsigned short)28806;
unsigned long long int var_10 = 6805938404751186409ULL;
int zero = 0;
short var_14 = (short)22233;
unsigned short var_15 = (unsigned short)8655;
void init() {
}

void checksum() {
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
