#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1176299253;
int var_3 = -1160082652;
unsigned short var_4 = (unsigned short)2500;
unsigned char var_5 = (unsigned char)141;
signed char var_7 = (signed char)-20;
unsigned short var_10 = (unsigned short)29217;
unsigned int var_11 = 1944722996U;
unsigned char var_13 = (unsigned char)22;
unsigned long long int var_14 = 9769220558258575896ULL;
int zero = 0;
signed char var_15 = (signed char)84;
_Bool var_16 = (_Bool)1;
int var_17 = 1029442381;
unsigned long long int var_18 = 1107534155288367721ULL;
unsigned short var_19 = (unsigned short)9586;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
