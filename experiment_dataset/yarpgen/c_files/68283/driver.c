#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40269;
signed char var_2 = (signed char)59;
unsigned short var_6 = (unsigned short)18252;
unsigned int var_7 = 3921902497U;
unsigned int var_8 = 2222764512U;
unsigned char var_9 = (unsigned char)37;
unsigned int var_10 = 2318845293U;
int zero = 0;
signed char var_12 = (signed char)-14;
signed char var_13 = (signed char)-8;
signed char var_14 = (signed char)82;
signed char var_15 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
