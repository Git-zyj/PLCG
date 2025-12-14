#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4250899912U;
long long int var_2 = -906824804532318523LL;
unsigned int var_8 = 2111488997U;
int zero = 0;
long long int var_16 = 5749045032264472052LL;
unsigned char var_17 = (unsigned char)215;
unsigned long long int var_18 = 2206860187804791603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
