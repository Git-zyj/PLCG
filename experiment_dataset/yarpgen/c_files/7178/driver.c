#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11085072119844646792ULL;
unsigned char var_5 = (unsigned char)59;
int var_6 = -1851804637;
long long int var_7 = 1596330521034156282LL;
int var_12 = -1451857889;
int var_15 = 1463897434;
unsigned short var_17 = (unsigned short)20334;
int zero = 0;
unsigned short var_20 = (unsigned short)53513;
int var_21 = -1168889458;
unsigned char var_22 = (unsigned char)61;
int var_23 = 186454667;
unsigned short var_24 = (unsigned short)61359;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
