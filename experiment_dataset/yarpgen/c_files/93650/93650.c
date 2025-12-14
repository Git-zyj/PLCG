/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_1 - 1] [i_0] = ((~((9223372036854775807 ^ (arr_2 [i_0] [i_0])))));
            var_12 = (arr_1 [i_0]);
            arr_5 [i_0] = (min((~2), (((!(arr_1 [i_0]))))));
            var_13 = (arr_3 [7] [20] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = ((203 ? 6812889651747400227 : (arr_11 [i_2 + 1] [i_0 + 1] [i_0 + 2])));
                        var_15 = ((!(arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_2 + 2] [i_3 - 1] [i_3 - 1])));
                    }
                }
            }
            var_16 = (min(var_16, ((((arr_0 [i_0 - 1]) > (arr_3 [i_0 + 1] [i_2 - 1] [8]))))));
            var_17 = 340087907;
        }
        arr_13 [i_0] = ((((max((arr_8 [i_0] [i_0 + 1] [i_0 - 1]), (arr_7 [i_0] [i_0 + 1] [i_0])))) ? (((((arr_8 [i_0] [i_0 + 1] [i_0]) < (arr_7 [17] [i_0 + 1] [i_0]))))) : ((-3804 ? (arr_10 [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : (arr_8 [i_0] [i_0 + 1] [1])))));

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_18 [i_5] [i_0] = -1;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 += ((-22 ? 254 : ((min((arr_19 [i_7 + 1] [i_7] [i_7] [i_0]), (arr_19 [i_7 - 1] [i_7] [i_7] [i_5]))))));
                        var_19 = 80;
                    }
                }
            }
            var_20 = (((max((-67 % 63), ((~(arr_19 [i_0] [i_0] [i_0] [i_0]))))) | (((arr_21 [i_0 + 2] [i_5 - 1] [i_5] [i_5 - 1]) ? -116 : (arr_21 [i_0 + 2] [i_5 + 3] [i_5] [i_5])))));
        }
        var_21 = (((arr_0 [i_0 - 1]) + -53));
        var_22 += (((max((((!(arr_0 [i_0])))), (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 3]))) ^ ((max(((((arr_11 [i_0] [i_0] [i_0]) ? (arr_15 [6] [6] [6]) : 1))), 1837469224)))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = (arr_15 [i_8] [i_8] [4]);
        var_23 = min((max((arr_3 [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8] [i_8]))), 98);
        arr_27 [i_8] [i_8] = -0;
    }
    var_24 = var_6;
    #pragma endscop
}
