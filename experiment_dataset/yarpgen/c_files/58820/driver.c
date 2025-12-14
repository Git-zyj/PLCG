#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)12896;
long long int var_6 = -7568433993953480110LL;
unsigned char var_10 = (unsigned char)20;
unsigned int var_14 = 895163826U;
int zero = 0;
short var_18 = (short)5024;
short var_19 = (short)15851;
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
