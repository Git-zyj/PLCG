#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62605;
int var_4 = 1622829693;
int var_7 = 1153177923;
int var_8 = 21836354;
unsigned short var_9 = (unsigned short)11441;
unsigned short var_13 = (unsigned short)59308;
int var_16 = 1960714918;
int zero = 0;
int var_17 = 1175380888;
int var_18 = -1558561052;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
