#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3342568203146939661ULL;
unsigned short var_4 = (unsigned short)36289;
int var_7 = 558129784;
unsigned int var_9 = 585830904U;
unsigned short var_10 = (unsigned short)50905;
short var_11 = (short)920;
int zero = 0;
unsigned int var_12 = 3965315438U;
int var_13 = 530471650;
void init() {
}

void checksum() {
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
