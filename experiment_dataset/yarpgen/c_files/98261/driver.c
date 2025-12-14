#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8794635827812973828LL;
int var_2 = -256151177;
int var_3 = 56099514;
long long int var_4 = 3468549166290263452LL;
long long int var_5 = 7372055168585700555LL;
long long int var_6 = -3990579656142144312LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2272382637929008790LL;
long long int var_11 = 1155385859368921632LL;
int zero = 0;
long long int var_12 = 2654357276219708773LL;
long long int var_13 = 357233728102124822LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
