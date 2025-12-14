#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11998;
short var_2 = (short)-18846;
int var_3 = -1122732072;
unsigned short var_5 = (unsigned short)36036;
unsigned long long int var_6 = 18362577190884918110ULL;
unsigned long long int var_7 = 3140433603451249177ULL;
int var_8 = 1837202503;
short var_9 = (short)20036;
int zero = 0;
unsigned long long int var_10 = 14374015130445120416ULL;
unsigned short var_11 = (unsigned short)4682;
unsigned int var_12 = 3401992615U;
signed char var_13 = (signed char)78;
int var_14 = 1855975445;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
