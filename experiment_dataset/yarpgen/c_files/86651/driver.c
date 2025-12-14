#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -18035384373774411LL;
unsigned short var_1 = (unsigned short)28242;
long long int var_5 = -4184972538106338416LL;
long long int var_8 = -5628592115382654928LL;
int var_11 = -260086864;
long long int var_12 = -3270616954491408894LL;
long long int var_14 = -5772338155739292511LL;
int zero = 0;
unsigned char var_17 = (unsigned char)7;
short var_18 = (short)26443;
short var_19 = (short)20468;
unsigned int var_20 = 1158694048U;
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
