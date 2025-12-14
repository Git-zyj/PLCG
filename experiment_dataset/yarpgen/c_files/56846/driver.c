#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
signed char var_3 = (signed char)-90;
short var_4 = (short)23295;
signed char var_5 = (signed char)-103;
signed char var_9 = (signed char)-115;
int zero = 0;
unsigned char var_10 = (unsigned char)30;
short var_11 = (short)-11138;
unsigned long long int var_12 = 1140920711861482896ULL;
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
