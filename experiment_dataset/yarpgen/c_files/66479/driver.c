#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
signed char var_1 = (signed char)78;
long long int var_3 = 5293723212447396587LL;
signed char var_6 = (signed char)74;
long long int var_8 = 6668696820307336445LL;
signed char var_9 = (signed char)-114;
unsigned short var_12 = (unsigned short)20411;
int zero = 0;
unsigned long long int var_14 = 17408807825214510115ULL;
unsigned int var_15 = 1258103384U;
signed char var_16 = (signed char)-13;
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
