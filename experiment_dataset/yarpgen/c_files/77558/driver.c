#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23166;
unsigned short var_2 = (unsigned short)50647;
unsigned char var_3 = (unsigned char)50;
signed char var_4 = (signed char)-73;
short var_5 = (short)-19958;
long long int var_6 = 5958211975760106192LL;
unsigned long long int var_8 = 8478345829890979654ULL;
unsigned char var_9 = (unsigned char)105;
long long int var_10 = -2996725793638847279LL;
int zero = 0;
unsigned char var_12 = (unsigned char)216;
unsigned char var_13 = (unsigned char)17;
long long int var_14 = 8739067484075799157LL;
unsigned short var_15 = (unsigned short)37557;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
