#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1427715370;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-14631;
int zero = 0;
unsigned char var_10 = (unsigned char)195;
signed char var_11 = (signed char)-127;
unsigned long long int var_12 = 7996430891030239128ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
