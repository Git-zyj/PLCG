/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (arr_1 [1])));
                var_11 += ((!(arr_6 [i_0] [i_0])));
                var_12 = (max(var_12, (arr_2 [12])));
            }
        }
    }
    var_13 = (37264 > 1);

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] [i_2] |= ((-var_8 > ((1033358636 ? (-2147483647 - 1) : 613422547547151878))));
        var_14 *= -107;
        var_15 = ((((((var_9 ? var_3 : (arr_7 [i_2])) >= var_8)))));
        arr_10 [i_2] [i_2] = (((-(arr_7 [9]))));
        var_16 *= ((((max(var_5, ((((arr_7 [2]) < 0)))))) ? (50 <= 1) : ((-9223372036854775785 ? ((var_2 ? (arr_8 [i_2]) : var_4)) : (((min((arr_7 [i_2]), -11))))))));
    }
    #pragma endscop
}
