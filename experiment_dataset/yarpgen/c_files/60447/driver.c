#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
long long int var_2 = 2809061370870328928LL;
unsigned char var_8 = (unsigned char)43;
unsigned short var_9 = (unsigned short)3570;
signed char var_13 = (signed char)-33;
int zero = 0;
unsigned short var_15 = (unsigned short)60617;
unsigned long long int var_16 = 16539895729850390580ULL;
signed char var_17 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
