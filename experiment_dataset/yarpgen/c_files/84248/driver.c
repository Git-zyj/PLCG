#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1357877624;
long long int var_2 = -4191483791769027170LL;
unsigned short var_3 = (unsigned short)20219;
unsigned int var_4 = 3197909354U;
long long int var_6 = 7759685455830467186LL;
long long int var_7 = 1649404949985729861LL;
signed char var_8 = (signed char)-112;
unsigned int var_9 = 3692411069U;
int zero = 0;
unsigned char var_10 = (unsigned char)249;
unsigned short var_11 = (unsigned short)11501;
long long int var_12 = 1552825786770589943LL;
unsigned char var_13 = (unsigned char)157;
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
