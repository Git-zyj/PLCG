#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
int var_3 = 444155309;
signed char var_4 = (signed char)3;
long long int var_8 = 4438909780266107945LL;
int var_9 = -215841271;
int zero = 0;
unsigned short var_10 = (unsigned short)49906;
unsigned long long int var_11 = 10959322027293997207ULL;
unsigned long long int var_12 = 9792152184995720371ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
