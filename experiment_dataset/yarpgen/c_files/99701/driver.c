#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5016186673090239028LL;
signed char var_8 = (signed char)-28;
long long int var_11 = 8144270898528608881LL;
signed char var_16 = (signed char)116;
int zero = 0;
unsigned short var_19 = (unsigned short)13180;
unsigned char var_20 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
