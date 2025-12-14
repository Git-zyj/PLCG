#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9086287451868234151ULL;
int var_5 = 1527053036;
unsigned char var_7 = (unsigned char)8;
long long int var_13 = 922085430441686987LL;
int zero = 0;
unsigned short var_17 = (unsigned short)62121;
unsigned long long int var_18 = 6209375329180138381ULL;
unsigned char var_19 = (unsigned char)119;
unsigned short var_20 = (unsigned short)14078;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
