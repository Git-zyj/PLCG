#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -89383194766489868LL;
unsigned int var_4 = 3202090591U;
unsigned long long int var_5 = 11792476081958286631ULL;
unsigned long long int var_7 = 16789096558371892105ULL;
short var_8 = (short)-27154;
int var_9 = 1959628397;
int zero = 0;
signed char var_10 = (signed char)-9;
signed char var_11 = (signed char)-37;
int var_12 = -2121652248;
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
