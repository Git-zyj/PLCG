#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25927;
_Bool var_2 = (_Bool)0;
short var_4 = (short)28999;
signed char var_6 = (signed char)32;
long long int var_8 = 7974878488018478824LL;
unsigned short var_9 = (unsigned short)17618;
short var_10 = (short)17335;
signed char var_16 = (signed char)117;
int zero = 0;
unsigned int var_18 = 3877893008U;
signed char var_19 = (signed char)-71;
void init() {
}

void checksum() {
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
