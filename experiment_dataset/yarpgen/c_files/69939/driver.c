#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26084;
unsigned int var_4 = 629282876U;
short var_6 = (short)14322;
unsigned int var_7 = 597343570U;
int zero = 0;
short var_10 = (short)-28183;
unsigned short var_11 = (unsigned short)15411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
