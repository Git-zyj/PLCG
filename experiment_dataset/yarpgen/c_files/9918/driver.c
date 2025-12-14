#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6519064781941088435LL;
unsigned int var_1 = 2015129803U;
signed char var_2 = (signed char)5;
short var_3 = (short)17174;
unsigned short var_6 = (unsigned short)5926;
unsigned short var_7 = (unsigned short)27095;
long long int var_9 = 7767293645718867536LL;
int var_10 = -157675324;
unsigned int var_12 = 3557658201U;
int zero = 0;
signed char var_14 = (signed char)-29;
unsigned short var_15 = (unsigned short)50925;
int var_16 = -1654355797;
unsigned long long int var_17 = 12328167141266005398ULL;
long long int var_18 = 4350208137595875545LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
