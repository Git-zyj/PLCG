#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned char var_1 = (unsigned char)85;
int var_3 = -1785362411;
short var_6 = (short)-21647;
unsigned long long int var_8 = 1823135012533782399ULL;
unsigned char var_9 = (unsigned char)160;
signed char var_10 = (signed char)57;
unsigned short var_13 = (unsigned short)64830;
unsigned char var_16 = (unsigned char)116;
unsigned long long int var_18 = 2637254144802677330ULL;
int zero = 0;
unsigned long long int var_19 = 10410128101799011164ULL;
long long int var_20 = 3980804406778970734LL;
unsigned long long int var_21 = 8193475731586984684ULL;
short var_22 = (short)-22913;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
