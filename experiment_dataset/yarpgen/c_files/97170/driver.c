#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 633883229U;
int var_1 = 1598198738;
short var_2 = (short)-18426;
unsigned long long int var_4 = 6310749392214589241ULL;
unsigned long long int var_6 = 2819024178878852404ULL;
signed char var_8 = (signed char)98;
long long int var_9 = -3120791978531155322LL;
int zero = 0;
long long int var_10 = 226085041427692342LL;
short var_11 = (short)-18635;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
