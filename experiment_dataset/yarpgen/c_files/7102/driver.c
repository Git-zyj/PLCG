#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3735741357879937846ULL;
long long int var_5 = 8125749788341203289LL;
unsigned long long int var_6 = 16059157236828421848ULL;
unsigned char var_8 = (unsigned char)104;
unsigned short var_9 = (unsigned short)347;
int zero = 0;
signed char var_14 = (signed char)66;
int var_15 = 1498678249;
unsigned long long int var_16 = 10145741444961442547ULL;
unsigned long long int var_17 = 17404606471779103393ULL;
unsigned long long int var_18 = 7835497836100412574ULL;
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
