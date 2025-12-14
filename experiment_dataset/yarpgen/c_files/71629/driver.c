#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
unsigned long long int var_4 = 14018301928679043979ULL;
unsigned long long int var_5 = 333623998784282125ULL;
int zero = 0;
unsigned long long int var_11 = 5078823098966273227ULL;
signed char var_12 = (signed char)-120;
signed char var_13 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
