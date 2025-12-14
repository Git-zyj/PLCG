#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7091766294869283342ULL;
unsigned long long int var_1 = 5426052708473184855ULL;
int var_2 = -1337728446;
unsigned short var_3 = (unsigned short)11496;
unsigned long long int var_4 = 2762093909201231743ULL;
unsigned long long int var_5 = 9720269136072318073ULL;
unsigned char var_6 = (unsigned char)123;
short var_7 = (short)4578;
short var_8 = (short)15893;
int zero = 0;
short var_10 = (short)-31286;
unsigned long long int var_11 = 3974165565955143388ULL;
unsigned char var_12 = (unsigned char)2;
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
