/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 |= (min((arr_0 [i_0]), (max((((arr_5 [i_1]) ? var_17 : 82)), ((-(arr_3 [i_0] [i_1])))))));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((~(arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 3])))))));
                    arr_8 [i_2] [4] [i_2] = (max((((((var_13 + (arr_4 [i_2] [i_0])))) ? 20395 : ((var_18 ? (arr_1 [5]) : (arr_6 [i_0] [5] [5] [i_2]))))), (-1932223229 - 134)));
                    arr_9 [i_0] [i_1] [i_2] = min((arr_2 [i_0] [i_2]), ((746858198 ? (4294967281 / 149) : -48)));
                }
                var_22 = (arr_2 [i_0] [i_1]);
                var_23 += (~26156);
                var_24 = (min((max((((arr_0 [i_1]) ? 9223372036854775808 : (arr_1 [i_0]))), (arr_3 [i_1] [i_0]))), ((((arr_5 [i_0]) + 4)))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        var_25 &= (arr_11 [i_3]);
        var_26 = var_15;
        arr_14 [i_3] = (((((-856589283 ? (arr_11 [i_3]) : (arr_12 [i_3])))) ? var_4 : (((!(arr_11 [i_3]))))));
        arr_15 [i_3] [i_3] = -15;
    }
    var_27 = var_6;
    #pragma endscop
}
