#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 246973769;
int var_1 = -948895101;
int var_2 = -468325673;
unsigned long long int var_3 = 10706679605676232454ULL;
int var_4 = -1096863151;
unsigned long long int var_5 = 13041087154238083970ULL;
int var_6 = -1450298079;
unsigned long long int var_7 = 13000615462967112517ULL;
unsigned long long int var_9 = 16645497864680271274ULL;
int zero = 0;
unsigned long long int var_10 = 16285005211377571151ULL;
int var_11 = 929230146;
int var_12 = 1495615621;
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
