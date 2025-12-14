#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-39;
short var_3 = (short)-27618;
unsigned char var_4 = (unsigned char)254;
short var_15 = (short)-30863;
unsigned long long int var_16 = 9155691959882442366ULL;
int var_17 = -1862988639;
int zero = 0;
long long int var_19 = 152461214151959778LL;
short var_20 = (short)28619;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
