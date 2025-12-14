#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
unsigned long long int var_2 = 12959936344442265342ULL;
unsigned char var_3 = (unsigned char)68;
int var_6 = -1614605546;
unsigned int var_7 = 692518558U;
int var_8 = -506964558;
int var_10 = 1003028628;
unsigned char var_11 = (unsigned char)185;
short var_12 = (short)-25639;
unsigned int var_13 = 1288725194U;
unsigned char var_14 = (unsigned char)177;
unsigned char var_16 = (unsigned char)52;
unsigned short var_17 = (unsigned short)9012;
int zero = 0;
int var_18 = -1890710001;
int var_19 = 935419668;
long long int var_20 = -2585415984818378673LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
