#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)17813;
unsigned short var_7 = (unsigned short)19816;
short var_11 = (short)-3310;
unsigned long long int var_13 = 7218142645366296728ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)11820;
unsigned short var_18 = (unsigned short)41786;
unsigned char var_19 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
