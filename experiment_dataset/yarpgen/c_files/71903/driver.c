#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)193;
unsigned short var_8 = (unsigned short)14923;
unsigned long long int var_9 = 13248952561176620822ULL;
int var_11 = 1325526281;
unsigned short var_12 = (unsigned short)18822;
int var_17 = -1539324920;
int zero = 0;
unsigned char var_18 = (unsigned char)59;
unsigned char var_19 = (unsigned char)122;
long long int var_20 = 3905886999259333928LL;
unsigned short var_21 = (unsigned short)874;
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
