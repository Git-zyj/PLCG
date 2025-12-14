#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1348352172197599108LL;
unsigned long long int var_6 = 4275358190206358251ULL;
int var_7 = 1954798582;
long long int var_11 = 4256697950023067177LL;
short var_13 = (short)-12803;
unsigned long long int var_16 = 9779259721745754176ULL;
int zero = 0;
short var_17 = (short)19361;
unsigned long long int var_18 = 11439716799619279162ULL;
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
