#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5823582507788036397ULL;
signed char var_9 = (signed char)-1;
int zero = 0;
signed char var_12 = (signed char)-89;
signed char var_13 = (signed char)57;
unsigned long long int var_14 = 8198348868131886834ULL;
unsigned char var_15 = (unsigned char)40;
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
