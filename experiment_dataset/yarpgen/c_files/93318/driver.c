#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1228805733;
unsigned short var_7 = (unsigned short)25440;
unsigned short var_8 = (unsigned short)54262;
unsigned long long int var_10 = 15571042187434515146ULL;
unsigned short var_11 = (unsigned short)50276;
long long int var_12 = 5316592567348280257LL;
unsigned long long int var_13 = 3473417434628820207ULL;
int var_14 = -1472565479;
unsigned long long int var_16 = 13387627483719889070ULL;
int zero = 0;
unsigned int var_17 = 21393875U;
unsigned int var_18 = 3419265607U;
unsigned long long int var_19 = 7676952661033686ULL;
void init() {
}

void checksum() {
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
