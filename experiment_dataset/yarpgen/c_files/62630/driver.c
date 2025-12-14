#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned short var_1 = (unsigned short)40197;
unsigned int var_3 = 4179159825U;
short var_4 = (short)-5620;
short var_9 = (short)-28694;
unsigned long long int var_11 = 11796219736216374109ULL;
signed char var_12 = (signed char)-57;
int zero = 0;
unsigned short var_14 = (unsigned short)14049;
int var_15 = -1119979864;
void init() {
}

void checksum() {
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
