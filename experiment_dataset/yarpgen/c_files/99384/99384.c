/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [14] = (((arr_2 [i_0 + 1]) % (arr_2 [i_0 + 1])));
        var_19 |= (((arr_0 [i_0 + 1] [11]) >= (arr_0 [i_0 + 1] [i_0])));
        var_20 = (max(var_20, (((var_14 & var_1) % (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 -= (((((+(((((arr_0 [i_1] [9]) + 9223372036854775807)) << (var_5 - 28)))))) ? var_4 : var_9));
        var_22 ^= (!0);
        var_23 = ((((-(arr_7 [i_1]))) & (arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_24 = (max(var_24, (((arr_6 [i_2 - 1] [i_2 + 2]) % ((var_5 ? 16888796473904982228 : 1557947599804569374))))));
        arr_10 [6] [i_2] = ((-(arr_2 [i_2 + 1])));
        arr_11 [i_2] = 1445;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_25 = (min(var_25, ((min((arr_14 [16] [i_3] [i_3]), ((-((-(arr_2 [i_3]))))))))));
                var_26 = (min(var_26, (((((((((arr_2 [i_3]) + 2147483647)) << (((((arr_2 [i_3]) - (arr_0 [1] [15]))) - 7913826409137563556))))) ? (arr_13 [i_3] [i_4]) : ((~(arr_13 [i_3] [i_3]))))))));
                var_27 = ((!(arr_15 [i_4] [i_4])));
                var_28 = ((-(((!(arr_0 [i_3] [i_4]))))));
            }
        }
    }
    var_29 = var_13;
    var_30 = ((var_4 ? var_8 : ((((var_11 | 1) ? (~var_1) : (var_13 >= var_16))))));
    #pragma endscop
}
