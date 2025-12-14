#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
signed char var_3 = (signed char)-24;
unsigned int var_4 = 3674526302U;
signed char var_6 = (signed char)-89;
int var_8 = -1397757948;
signed char var_9 = (signed char)-25;
unsigned long long int var_10 = 15511345487234106988ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)188;
signed char var_13 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
