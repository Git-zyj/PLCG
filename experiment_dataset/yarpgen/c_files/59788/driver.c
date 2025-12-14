#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
signed char var_6 = (signed char)-88;
int var_7 = -805885972;
short var_8 = (short)-25180;
signed char var_9 = (signed char)15;
unsigned char var_10 = (unsigned char)186;
unsigned int var_11 = 4038388166U;
int zero = 0;
long long int var_15 = 4102671805420420309LL;
short var_16 = (short)18224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
