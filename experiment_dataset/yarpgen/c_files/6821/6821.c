/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-1689289121 || -24) ? ((24 ? 1 : -10)) : (var_3 >= var_1))) < ((max(var_4, 8771)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (((((79 | (max(var_0, 2))))) ? ((((1 ? 1323030379 : 2384)))) : ((var_4 ^ (((arr_0 [i_0]) ? var_5 : var_9))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (((((!(arr_0 [17])))) << (((arr_0 [i_3]) - 5126))));
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((14 ? 16 : -469126115377268630));
                    }
                }
            }
        }
        var_15 = 135;

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_16 = (!14);
            var_17 ^= ((((((-126 ? (arr_5 [i_4] [i_4] [i_0] [i_0]) : var_9)))) ? (arr_1 [i_0] [i_0]) : ((-126 ? var_3 : -114))));
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_18 = (((((var_6 ? var_5 : -10))) ? ((-2111782382 ? (arr_4 [2] [i_5] [16]) : 18249)) : (arr_4 [0] [16] [0])));
        var_19 = ((var_1 ? (((!(arr_5 [10] [i_5] [i_5] [i_5])))) : ((max(-15, 0)))));
        arr_14 [i_5] = (min((arr_3 [i_5]), (((61 < (arr_6 [i_5] [i_5] [i_5] [i_5]))))));
        arr_15 [7] = (arr_6 [16] [i_5] [15] [16]);
    }
    var_20 = ((var_7 ? (max(((var_0 ? var_6 : var_1)), ((201 ? var_6 : (-9223372036854775807 - 1))))) : var_6));
    #pragma endscop
}
