#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17361446644762958273ULL;
signed char var_11 = (signed char)37;
unsigned long long int var_17 = 15502013117384112539ULL;
signed char var_18 = (signed char)-120;
int zero = 0;
unsigned long long int var_19 = 4657379773381450824ULL;
unsigned long long int var_20 = 13560186240001021852ULL;
signed char var_21 = (signed char)62;
signed char var_22 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
