#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1317;
long long int var_2 = -3156889974053198838LL;
short var_6 = (short)-16986;
unsigned long long int var_10 = 15174711333496758342ULL;
int var_12 = 204888154;
unsigned short var_17 = (unsigned short)20293;
int zero = 0;
long long int var_18 = -4728267193518635614LL;
long long int var_19 = -2158683540938386748LL;
unsigned short var_20 = (unsigned short)24329;
unsigned short var_21 = (unsigned short)41218;
unsigned short var_22 = (unsigned short)54990;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
