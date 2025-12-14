/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 &= (((var_3 ^ 7435992728353227341) ^ var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((~(((arr_0 [i_0] [i_0]) + (arr_1 [i_0])))));
        var_13 |= var_8;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 -= ((~(((var_5 == (arr_4 [i_1] [i_1 + 2]))))));
        var_15 += 1534746940;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = ((2760220349 ? ((((~1) ? ((((arr_5 [i_2] [i_2]) < (arr_7 [5])))) : 1))) : (max((arr_3 [i_2] [i_2]), 1534746946))));
        var_17 &= (min(18446744073709551615, 1));
        var_18 = 0;
    }
    var_19 = (max(var_19, (var_3 * -1)));
    #pragma endscop
}
