#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)94;
long long int var_9 = -4345382366461360692LL;
unsigned int var_13 = 1051709141U;
int zero = 0;
short var_14 = (short)17682;
unsigned char var_15 = (unsigned char)179;
int var_16 = -1639711200;
unsigned char var_17 = (unsigned char)215;
signed char var_18 = (signed char)118;
int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1957749072;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
