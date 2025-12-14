#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1493745901U;
short var_3 = (short)7348;
unsigned short var_5 = (unsigned short)43604;
unsigned short var_9 = (unsigned short)41143;
unsigned long long int var_10 = 12946032622253323339ULL;
int var_11 = 1201518546;
int zero = 0;
unsigned long long int var_15 = 11814025921662910048ULL;
unsigned char var_16 = (unsigned char)23;
unsigned long long int var_17 = 13892025028664671141ULL;
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
