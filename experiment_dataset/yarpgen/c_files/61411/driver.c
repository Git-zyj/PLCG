#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19420;
long long int var_4 = 8765203315423322927LL;
signed char var_5 = (signed char)-101;
unsigned char var_11 = (unsigned char)18;
unsigned long long int var_12 = 4907675559149989166ULL;
int zero = 0;
short var_13 = (short)-19061;
unsigned int var_14 = 4177599218U;
unsigned char var_15 = (unsigned char)189;
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
