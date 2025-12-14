#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned short var_1 = (unsigned short)40911;
unsigned char var_2 = (unsigned char)203;
int var_3 = 141359108;
unsigned int var_4 = 283753629U;
unsigned int var_5 = 3001144845U;
signed char var_8 = (signed char)-31;
int var_9 = 1947022454;
int zero = 0;
unsigned long long int var_10 = 4708105826768869872ULL;
unsigned short var_11 = (unsigned short)19198;
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
