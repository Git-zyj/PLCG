#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1440214245282299240LL;
long long int var_1 = -692743198919684522LL;
long long int var_3 = -3313836145488457478LL;
long long int var_4 = -403269475626330390LL;
long long int var_5 = 3115573539586718837LL;
unsigned char var_7 = (unsigned char)249;
long long int var_8 = 310762140743384909LL;
long long int var_9 = -4203229172699606893LL;
int var_10 = 1835717412;
long long int var_13 = 8561368881650154481LL;
long long int var_14 = -6188715491815148285LL;
int var_15 = 1746469218;
int zero = 0;
long long int var_17 = -3482949376284751271LL;
unsigned char var_18 = (unsigned char)207;
int var_19 = 1155611222;
unsigned char var_20 = (unsigned char)60;
long long int var_21 = -8431509170907022805LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
