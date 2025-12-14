#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3988908242U;
long long int var_2 = 6277287846757913277LL;
unsigned long long int var_4 = 17432854313083792580ULL;
unsigned char var_5 = (unsigned char)79;
unsigned char var_9 = (unsigned char)28;
unsigned char var_10 = (unsigned char)194;
int zero = 0;
unsigned int var_11 = 666756539U;
unsigned int var_12 = 1764892306U;
void init() {
}

void checksum() {
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
