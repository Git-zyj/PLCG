#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11801;
signed char var_1 = (signed char)-116;
int var_3 = 1196475766;
long long int var_4 = 6111154389963755023LL;
unsigned int var_7 = 4214910708U;
unsigned char var_8 = (unsigned char)154;
signed char var_9 = (signed char)-72;
int zero = 0;
long long int var_10 = -4041264602618428830LL;
signed char var_11 = (signed char)-115;
long long int var_12 = -3763008502094786152LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
