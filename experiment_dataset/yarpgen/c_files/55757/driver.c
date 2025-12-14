#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4746167829323699565ULL;
long long int var_12 = 6670968730772112856LL;
int zero = 0;
short var_13 = (short)-16012;
int var_14 = 542032902;
unsigned long long int var_15 = 6909435040239336254ULL;
short var_16 = (short)-17131;
signed char var_17 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
