#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3007070582U;
int var_4 = -992856313;
unsigned char var_6 = (unsigned char)181;
unsigned long long int var_7 = 15946325405787626497ULL;
int var_10 = -665602735;
int var_14 = 126121319;
int zero = 0;
unsigned long long int var_18 = 7922735059685791028ULL;
short var_19 = (short)-31708;
unsigned long long int var_20 = 2097045975881416224ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
