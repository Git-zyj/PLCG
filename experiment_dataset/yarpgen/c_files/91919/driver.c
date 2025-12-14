#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3634608467767809102LL;
unsigned int var_3 = 4289572186U;
unsigned short var_5 = (unsigned short)38534;
unsigned char var_9 = (unsigned char)33;
int zero = 0;
unsigned long long int var_12 = 2510925835674181541ULL;
unsigned char var_13 = (unsigned char)176;
unsigned long long int var_14 = 17828993091868191588ULL;
long long int var_15 = 7019351060127816339LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
