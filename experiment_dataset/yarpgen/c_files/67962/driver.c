#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_1 = (unsigned short)40166;
unsigned short var_2 = (unsigned short)27233;
int var_3 = 1327670833;
unsigned char var_4 = (unsigned char)23;
unsigned short var_5 = (unsigned short)59200;
int var_8 = -1218700739;
int var_10 = -1978730079;
int zero = 0;
unsigned char var_13 = (unsigned char)134;
unsigned int var_14 = 4262040202U;
unsigned int var_15 = 3250611325U;
int var_16 = -1632970839;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
