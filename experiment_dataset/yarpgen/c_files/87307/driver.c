#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8785268017316546163ULL;
unsigned long long int var_1 = 13143087716681820463ULL;
unsigned char var_2 = (unsigned char)212;
unsigned int var_4 = 1409138795U;
unsigned long long int var_6 = 15758681103022065923ULL;
unsigned long long int var_7 = 10161067672282212927ULL;
unsigned long long int var_8 = 5040528193370084361ULL;
signed char var_9 = (signed char)-103;
unsigned long long int var_10 = 10787076449925543806ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)144;
unsigned short var_12 = (unsigned short)36422;
short var_13 = (short)19307;
short var_14 = (short)-715;
short var_15 = (short)-16032;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
