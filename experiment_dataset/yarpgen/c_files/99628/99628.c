/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_0 ? (~var_7) : ((var_9 ? var_5 : var_0))));
    var_11 = (((((max(var_7, var_4) >= var_3)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((arr_0 [i_0]) / (arr_0 [i_0])))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_13 &= (max((((arr_2 [i_0]) * (((arr_1 [i_0]) / (arr_2 [14]))))), ((min(4294967291, -1)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 += min((min(var_6, (min(4556408310474313782, 18446744073709551615)))), (arr_5 [20] [1]));
        arr_6 [3] = 3027192297;
        arr_7 [0] &= 660124225;
        arr_8 [16] |= (((((1267774994 ? ((4028136016 ? 16777215 : 16777218)) : var_3))) + (arr_1 [i_1])));
    }
    #pragma endscop
}
