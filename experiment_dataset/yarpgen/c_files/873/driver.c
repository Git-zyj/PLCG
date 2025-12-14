#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
unsigned char var_5 = (unsigned char)98;
unsigned long long int var_9 = 8997672826964670303ULL;
long long int var_11 = 530239846603060901LL;
int var_12 = -1849166637;
int zero = 0;
signed char var_15 = (signed char)43;
unsigned short var_16 = (unsigned short)38890;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
