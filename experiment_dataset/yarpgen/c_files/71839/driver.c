#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned int var_1 = 881487333U;
short var_2 = (short)-27377;
long long int var_3 = 335289955222537851LL;
unsigned long long int var_5 = 18020946223407402372ULL;
unsigned int var_6 = 1634001262U;
unsigned long long int var_8 = 15760416888632573336ULL;
signed char var_9 = (signed char)-85;
unsigned long long int var_10 = 6266239006733863079ULL;
unsigned short var_11 = (unsigned short)155;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)51240;
unsigned short var_14 = (unsigned short)19671;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
