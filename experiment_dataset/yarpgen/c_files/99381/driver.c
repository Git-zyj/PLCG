#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-121;
short var_8 = (short)31770;
signed char var_9 = (signed char)53;
unsigned short var_10 = (unsigned short)18430;
signed char var_12 = (signed char)-66;
int zero = 0;
signed char var_19 = (signed char)-94;
unsigned short var_20 = (unsigned short)13297;
void init() {
}

void checksum() {
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
