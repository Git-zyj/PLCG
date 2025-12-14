#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -919666275850788423LL;
unsigned short var_2 = (unsigned short)61487;
unsigned int var_3 = 1353953192U;
unsigned char var_9 = (unsigned char)139;
unsigned char var_10 = (unsigned char)203;
unsigned long long int var_14 = 15380212317871206757ULL;
unsigned long long int var_15 = 1686770420173067673ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)153;
_Bool var_18 = (_Bool)0;
int var_19 = 1762739738;
unsigned short var_20 = (unsigned short)60852;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
