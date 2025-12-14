#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2677922276U;
long long int var_3 = 4595951247699806449LL;
signed char var_7 = (signed char)25;
unsigned int var_8 = 4289100152U;
unsigned short var_9 = (unsigned short)1327;
unsigned long long int var_14 = 12636490171345753114ULL;
int var_16 = -2093471643;
int zero = 0;
unsigned short var_18 = (unsigned short)36587;
unsigned short var_19 = (unsigned short)51017;
unsigned int var_20 = 2409914018U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
