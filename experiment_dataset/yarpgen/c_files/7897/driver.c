#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16755;
long long int var_4 = -7722043718555897733LL;
unsigned int var_11 = 505628130U;
int zero = 0;
long long int var_20 = -4047372664512873048LL;
long long int var_21 = 985551710395860469LL;
unsigned char var_22 = (unsigned char)59;
unsigned int var_23 = 2175326250U;
long long int var_24 = -4016884635219171871LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
