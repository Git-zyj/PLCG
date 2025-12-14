#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3819801454U;
unsigned char var_2 = (unsigned char)61;
unsigned char var_3 = (unsigned char)10;
int var_7 = 1357073464;
short var_8 = (short)-27245;
int zero = 0;
long long int var_10 = 6762093333884764018LL;
long long int var_11 = 5739808343872517508LL;
signed char var_12 = (signed char)-41;
short var_13 = (short)29954;
signed char var_14 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
