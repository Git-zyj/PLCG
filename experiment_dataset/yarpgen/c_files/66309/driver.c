#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 522595137;
unsigned int var_1 = 1927684884U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7959908391732409741ULL;
unsigned char var_5 = (unsigned char)232;
unsigned char var_6 = (unsigned char)57;
unsigned char var_8 = (unsigned char)123;
long long int var_9 = -3814033640342179892LL;
signed char var_10 = (signed char)-127;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
unsigned char var_13 = (unsigned char)194;
unsigned short var_14 = (unsigned short)26726;
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
