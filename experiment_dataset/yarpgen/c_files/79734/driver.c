#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
unsigned long long int var_2 = 17727051664599173406ULL;
unsigned char var_5 = (unsigned char)120;
unsigned short var_9 = (unsigned short)4172;
int zero = 0;
unsigned long long int var_13 = 14315378764316893583ULL;
short var_14 = (short)-6836;
void init() {
}

void checksum() {
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
