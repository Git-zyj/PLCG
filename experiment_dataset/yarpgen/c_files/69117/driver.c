#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-97;
int var_5 = 1750735502;
unsigned long long int var_8 = 12390068279459918662ULL;
long long int var_9 = -7912132378869025745LL;
signed char var_11 = (signed char)-103;
int zero = 0;
signed char var_13 = (signed char)-32;
unsigned char var_14 = (unsigned char)89;
void init() {
}

void checksum() {
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
