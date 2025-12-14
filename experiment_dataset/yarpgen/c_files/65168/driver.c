#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
signed char var_2 = (signed char)-73;
signed char var_4 = (signed char)-58;
signed char var_8 = (signed char)-86;
signed char var_9 = (signed char)81;
signed char var_10 = (signed char)106;
int var_13 = -52738840;
int zero = 0;
int var_16 = 1248430110;
int var_17 = 206836543;
signed char var_18 = (signed char)-107;
signed char var_19 = (signed char)-103;
int var_20 = 128059111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
