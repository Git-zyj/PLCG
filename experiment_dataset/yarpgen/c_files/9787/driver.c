#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46420;
unsigned char var_3 = (unsigned char)246;
short var_5 = (short)-11103;
unsigned short var_8 = (unsigned short)9454;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
unsigned long long int var_10 = 5102769708846805891ULL;
unsigned int var_11 = 1066174247U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
