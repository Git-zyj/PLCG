#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
unsigned int var_3 = 2034303838U;
unsigned int var_4 = 67642409U;
short var_7 = (short)-11511;
signed char var_9 = (signed char)-109;
signed char var_10 = (signed char)82;
signed char var_16 = (signed char)-42;
int zero = 0;
unsigned long long int var_18 = 6447220884300878278ULL;
unsigned int var_19 = 3342514327U;
unsigned long long int var_20 = 1158179155344234346ULL;
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
