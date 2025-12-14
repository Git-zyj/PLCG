#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5421215788458358715LL;
signed char var_2 = (signed char)-19;
unsigned short var_5 = (unsigned short)56921;
signed char var_7 = (signed char)-118;
unsigned int var_9 = 3569513196U;
int zero = 0;
long long int var_11 = -5399621901602421856LL;
unsigned int var_12 = 3593636808U;
signed char var_13 = (signed char)48;
int var_14 = 1537219993;
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
