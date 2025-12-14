#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
short var_8 = (short)-10515;
signed char var_13 = (signed char)20;
long long int var_18 = -8862704338604648622LL;
int zero = 0;
unsigned short var_20 = (unsigned short)58844;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
