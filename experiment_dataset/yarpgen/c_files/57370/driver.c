#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
signed char var_2 = (signed char)-46;
unsigned int var_3 = 94645667U;
signed char var_8 = (signed char)64;
unsigned short var_9 = (unsigned short)36897;
unsigned long long int var_10 = 17448296722025557848ULL;
int zero = 0;
signed char var_12 = (signed char)104;
short var_13 = (short)-4905;
unsigned char var_14 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
