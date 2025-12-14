#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1505390370;
unsigned short var_5 = (unsigned short)56916;
signed char var_6 = (signed char)77;
unsigned char var_9 = (unsigned char)43;
unsigned char var_17 = (unsigned char)78;
int zero = 0;
int var_18 = 1003744318;
signed char var_19 = (signed char)-44;
void init() {
}

void checksum() {
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
