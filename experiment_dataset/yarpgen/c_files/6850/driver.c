#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12355657917384147665ULL;
signed char var_1 = (signed char)39;
unsigned short var_3 = (unsigned short)59907;
unsigned char var_7 = (unsigned char)124;
unsigned short var_9 = (unsigned short)9184;
unsigned char var_10 = (unsigned char)4;
unsigned int var_11 = 2293004703U;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
int var_13 = -242086681;
signed char var_14 = (signed char)51;
unsigned int var_15 = 2658047407U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
