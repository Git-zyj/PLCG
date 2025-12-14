#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10936018060610559450ULL;
unsigned long long int var_3 = 9986759710844238848ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)22949;
unsigned long long int var_13 = 9997586580346677582ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
