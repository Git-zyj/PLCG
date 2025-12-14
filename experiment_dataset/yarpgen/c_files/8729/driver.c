#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3805723608553933359ULL;
unsigned long long int var_3 = 8060053916706993039ULL;
unsigned short var_4 = (unsigned short)54785;
int var_7 = 1390923334;
unsigned char var_8 = (unsigned char)139;
unsigned long long int var_9 = 17010193902799936077ULL;
signed char var_10 = (signed char)-74;
int zero = 0;
signed char var_12 = (signed char)25;
unsigned char var_13 = (unsigned char)2;
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
