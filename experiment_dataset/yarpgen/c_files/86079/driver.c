#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)31;
unsigned short var_4 = (unsigned short)26505;
unsigned short var_5 = (unsigned short)30784;
signed char var_9 = (signed char)-121;
unsigned long long int var_13 = 13129632884828529708ULL;
int zero = 0;
signed char var_18 = (signed char)58;
short var_19 = (short)27391;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
