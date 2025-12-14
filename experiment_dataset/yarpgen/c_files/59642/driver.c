#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-5;
int var_8 = 1588341640;
unsigned short var_9 = (unsigned short)42566;
signed char var_10 = (signed char)-44;
long long int var_12 = 5051567161572050660LL;
int zero = 0;
long long int var_17 = 5516823329712158168LL;
long long int var_18 = -5332590650457681925LL;
unsigned int var_19 = 2310916289U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
