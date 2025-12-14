#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)(-127 - 1);
unsigned long long int var_4 = 916144406216227152ULL;
long long int var_5 = 287481890356784347LL;
unsigned char var_6 = (unsigned char)23;
unsigned int var_7 = 111026378U;
int zero = 0;
unsigned long long int var_10 = 12293891829575606464ULL;
short var_11 = (short)-12331;
signed char var_12 = (signed char)105;
long long int var_13 = -4694297103821206849LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
