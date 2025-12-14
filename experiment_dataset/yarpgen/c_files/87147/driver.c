#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 358770421704920261LL;
signed char var_3 = (signed char)89;
unsigned short var_8 = (unsigned short)25856;
long long int var_9 = 2250144634693294238LL;
int zero = 0;
unsigned int var_13 = 2985694700U;
unsigned short var_14 = (unsigned short)19214;
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
