#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29522;
long long int var_1 = -8354018762592127042LL;
int var_2 = 418300719;
int var_6 = 696995484;
signed char var_8 = (signed char)8;
short var_9 = (short)3299;
int zero = 0;
unsigned short var_12 = (unsigned short)42131;
short var_13 = (short)18325;
int var_14 = -1370165208;
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
