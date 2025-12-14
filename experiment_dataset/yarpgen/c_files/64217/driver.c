#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)44;
int var_6 = -1532652248;
unsigned short var_7 = (unsigned short)53075;
int var_10 = -703178708;
short var_11 = (short)15077;
int zero = 0;
unsigned int var_12 = 3783057471U;
long long int var_13 = 8628468623258279392LL;
short var_14 = (short)30332;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
