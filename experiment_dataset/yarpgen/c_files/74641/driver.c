#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
unsigned char var_3 = (unsigned char)97;
unsigned short var_4 = (unsigned short)28246;
unsigned long long int var_6 = 4899715787046790545ULL;
unsigned short var_8 = (unsigned short)26511;
unsigned short var_11 = (unsigned short)63460;
signed char var_14 = (signed char)-91;
unsigned long long int var_15 = 16169643161663684682ULL;
int var_17 = 838203446;
unsigned long long int var_18 = 14761951234953141434ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
unsigned char var_20 = (unsigned char)34;
unsigned char var_21 = (unsigned char)219;
unsigned long long int var_22 = 17562951762956884380ULL;
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
