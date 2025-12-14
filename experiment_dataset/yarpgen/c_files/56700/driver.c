#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7568077786333859063LL;
unsigned long long int var_1 = 1184625369193911378ULL;
signed char var_2 = (signed char)-74;
unsigned long long int var_3 = 15704092952399816929ULL;
long long int var_5 = -4520700591079517257LL;
unsigned int var_6 = 1484155324U;
signed char var_10 = (signed char)-12;
int zero = 0;
signed char var_11 = (signed char)86;
unsigned int var_12 = 3140964827U;
short var_13 = (short)-26878;
unsigned int var_14 = 950959101U;
void init() {
}

void checksum() {
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
