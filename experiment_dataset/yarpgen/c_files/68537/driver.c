#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12832021835045562192ULL;
unsigned long long int var_3 = 3581731462797314904ULL;
unsigned long long int var_5 = 15908917190819341734ULL;
unsigned short var_8 = (unsigned short)31217;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 9786317285500275714ULL;
unsigned long long int var_13 = 16829701455803708790ULL;
unsigned short var_15 = (unsigned short)30243;
int zero = 0;
int var_16 = -128783333;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13671235208687469093ULL;
unsigned short var_19 = (unsigned short)11721;
int var_20 = -940836822;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
