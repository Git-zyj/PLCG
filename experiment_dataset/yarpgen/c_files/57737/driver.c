#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9010160602355541631ULL;
unsigned long long int var_4 = 1113195788961967873ULL;
unsigned long long int var_8 = 7541262240482314788ULL;
unsigned int var_9 = 2583016977U;
int zero = 0;
unsigned int var_11 = 4069693058U;
unsigned int var_12 = 564848498U;
short var_13 = (short)19751;
short var_14 = (short)4107;
void init() {
}

void checksum() {
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
