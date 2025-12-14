#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-53;
short var_12 = (short)5240;
unsigned long long int var_14 = 5674491784984933947ULL;
unsigned long long int var_18 = 6016539581637198194ULL;
int zero = 0;
long long int var_19 = 7274546766089702965LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)77;
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
