#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5856024835397398181LL;
short var_4 = (short)7627;
unsigned char var_6 = (unsigned char)8;
unsigned short var_8 = (unsigned short)35995;
int zero = 0;
short var_13 = (short)-19325;
short var_14 = (short)19698;
short var_15 = (short)-5791;
long long int var_16 = 1125653369659502949LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
