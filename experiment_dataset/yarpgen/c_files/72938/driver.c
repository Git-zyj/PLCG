#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2841722226U;
signed char var_2 = (signed char)-106;
long long int var_3 = -8573116499959116976LL;
unsigned int var_4 = 1641036772U;
short var_5 = (short)30244;
long long int var_6 = 7760743507552281242LL;
short var_7 = (short)15719;
long long int var_8 = -7199701445251252511LL;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
unsigned short var_10 = (unsigned short)37697;
int var_11 = -1084128084;
unsigned long long int var_12 = 4150539469978612509ULL;
unsigned int var_13 = 3640033780U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
