/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (((var_12 ? var_10 : var_6)));
        var_14 = (((242 ? 9223372036854775780 : 9223372036854775754)));
    }
    var_15 = var_10;
    var_16 = 9223372036854775781;
    var_17 = ((((((((2147483647 ? var_1 : -9223372036854775775))) ? (((-3357010184606672203 ? -122 : -1690896370))) : ((1117986652 ? 3452534941380109498 : var_7))))) ? (((((9223372036854775780 ? 15 : 9223372036854775780))) ? -282025351 : ((((-9223372036854775788 + 9223372036854775807) << 27))))) : ((((var_2 + 9223372036854775807) >> (4294967289 - 4294967243))))));
    #pragma endscop
}
