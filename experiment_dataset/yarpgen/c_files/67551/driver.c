#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6274662295674628470LL;
long long int var_2 = 8343855073958139601LL;
unsigned short var_16 = (unsigned short)11006;
int zero = 0;
long long int var_18 = -7647883459419866074LL;
unsigned int var_19 = 2163745645U;
unsigned short var_20 = (unsigned short)8955;
void init() {
}

void checksum() {
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
