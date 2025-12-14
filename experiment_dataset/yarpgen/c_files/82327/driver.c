#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned int var_2 = 4084488996U;
short var_3 = (short)-17656;
unsigned short var_4 = (unsigned short)10026;
short var_5 = (short)-24615;
unsigned int var_6 = 266229223U;
unsigned char var_9 = (unsigned char)139;
unsigned short var_10 = (unsigned short)19594;
unsigned short var_11 = (unsigned short)17018;
int zero = 0;
unsigned long long int var_15 = 10185796272980509588ULL;
unsigned long long int var_16 = 9256239726122177394ULL;
signed char var_17 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
