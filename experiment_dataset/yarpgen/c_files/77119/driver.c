#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -468602593;
int var_3 = -1525582945;
int var_4 = 72331176;
int var_6 = 2084468479;
int var_7 = -2085009773;
int var_9 = -1206216370;
int var_14 = -1043009672;
int var_15 = 1145138163;
int var_16 = -1492286122;
int zero = 0;
int var_18 = 166682475;
int var_19 = 2012008579;
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
