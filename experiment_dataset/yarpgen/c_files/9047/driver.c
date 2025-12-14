#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11436;
short var_3 = (short)-32358;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 4253280484U;
unsigned int var_11 = 3353468669U;
unsigned int var_12 = 4021313296U;
unsigned long long int var_13 = 8197665619800680468ULL;
unsigned long long int var_17 = 14537811258373273522ULL;
short var_18 = (short)29837;
int zero = 0;
unsigned short var_19 = (unsigned short)60467;
unsigned char var_20 = (unsigned char)6;
unsigned int var_21 = 2742341791U;
short var_22 = (short)-29473;
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
