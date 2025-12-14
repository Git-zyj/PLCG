#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11040888402285557411ULL;
unsigned long long int var_1 = 14229762047251322385ULL;
unsigned long long int var_2 = 1604923439283679520ULL;
unsigned long long int var_3 = 8611381314659857373ULL;
unsigned long long int var_4 = 10622231442242030071ULL;
unsigned long long int var_5 = 13606744911996731109ULL;
unsigned long long int var_9 = 11783185616357015409ULL;
unsigned long long int var_10 = 7455664481203713282ULL;
unsigned long long int var_12 = 3772760371241363014ULL;
unsigned long long int var_13 = 13168658872907351940ULL;
int zero = 0;
unsigned long long int var_14 = 572989528415341907ULL;
unsigned long long int var_15 = 18332302677691451969ULL;
unsigned long long int var_16 = 2163557425265786914ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
