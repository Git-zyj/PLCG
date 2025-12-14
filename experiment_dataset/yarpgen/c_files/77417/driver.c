#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48341;
unsigned long long int var_3 = 11078015710880067679ULL;
unsigned short var_6 = (unsigned short)12742;
long long int var_7 = -5411202603966539267LL;
unsigned long long int var_9 = 8964852431751642429ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)60201;
unsigned short var_12 = (unsigned short)52348;
long long int var_13 = 8529995537520578649LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
