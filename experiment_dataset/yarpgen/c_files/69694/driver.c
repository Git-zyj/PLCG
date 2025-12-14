#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
int var_5 = -741782330;
signed char var_6 = (signed char)47;
unsigned long long int var_11 = 9581692779458261405ULL;
int var_13 = 1117777960;
signed char var_15 = (signed char)-43;
int zero = 0;
unsigned long long int var_16 = 13982486514465227204ULL;
unsigned char var_17 = (unsigned char)155;
int var_18 = 1215590965;
signed char var_19 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
