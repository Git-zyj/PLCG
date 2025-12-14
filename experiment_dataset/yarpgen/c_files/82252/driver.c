#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
long long int var_9 = -2867471628509174664LL;
unsigned int var_11 = 4140987653U;
int zero = 0;
unsigned short var_13 = (unsigned short)35439;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
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
