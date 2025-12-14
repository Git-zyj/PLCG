#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-71;
int var_9 = -1317477643;
unsigned int var_11 = 3923453809U;
long long int var_12 = -2034517973808321588LL;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
signed char var_19 = (signed char)-110;
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
