#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63583;
int var_1 = 193108079;
unsigned char var_4 = (unsigned char)231;
short var_6 = (short)10926;
unsigned int var_11 = 3928128736U;
int zero = 0;
signed char var_13 = (signed char)-94;
int var_14 = -290498615;
unsigned long long int var_15 = 3418536850361325620ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
