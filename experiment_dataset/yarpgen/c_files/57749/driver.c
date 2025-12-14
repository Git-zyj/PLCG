#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27217;
unsigned int var_2 = 1608553855U;
short var_4 = (short)698;
int var_8 = -568447568;
unsigned short var_13 = (unsigned short)14606;
int zero = 0;
long long int var_19 = 4349920812167028856LL;
unsigned short var_20 = (unsigned short)32065;
void init() {
}

void checksum() {
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
