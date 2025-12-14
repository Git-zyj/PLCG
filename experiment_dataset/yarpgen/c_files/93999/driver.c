#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10984130219423627438ULL;
short var_9 = (short)13005;
unsigned char var_13 = (unsigned char)154;
unsigned long long int var_18 = 15248143368004189025ULL;
int zero = 0;
short var_20 = (short)-28625;
short var_21 = (short)20174;
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
