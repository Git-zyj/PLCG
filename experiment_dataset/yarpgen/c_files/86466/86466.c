/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 -= (min((arr_2 [18]), (~142)));
                var_16 = ((((min((max(50758, (arr_1 [i_1] [i_1]))), ((((arr_2 [i_0]) < (arr_0 [i_0] [i_1]))))))) || (18446744073709551615 - var_11)));

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((((((arr_7 [i_0] [0] [0] [i_2]) ? (arr_3 [i_0 - 2] [i_0 + 3] [11]) : 643183838))) ? ((min((arr_2 [i_0]), ((((arr_3 [i_0] [i_0 + 3] [i_0 + 1]) != (arr_3 [i_0 + 3] [i_1] [i_2 - 1]))))))) : (arr_7 [i_1] [19] [i_1] [i_0])));
                    var_18 = (((arr_0 [i_0 + 4] [i_0]) | ((((min((arr_8 [i_2] [i_1] [i_1] [i_0]), (arr_1 [i_2 + 3] [i_1])))) ? var_11 : (arr_8 [i_0 - 2] [1] [i_0 - 1] [i_2 + 1])))));
                    var_19 = arr_5 [i_0] [i_0];
                    var_20 = ((((((max((arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3]), var_12))) && (arr_5 [i_1] [i_0 + 3]))) ? (arr_7 [i_0] [6] [11] [i_0]) : ((min((arr_4 [i_0 - 3] [i_1] [i_2 + 3]), (arr_4 [i_0] [i_1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_21 -= (min((((arr_6 [i_0 - 1] [i_1] [i_3] [4]) ? var_9 : 7)), 0));
                    var_22 = (min(var_22, (((((((arr_1 [9] [9]) % var_0)) & (arr_10 [i_0 + 4] [i_1] [2])))))));
                    var_23 = ((((min(14788, (((arr_9 [18] [i_1] [4] [6]) ? var_2 : var_12))))) ? ((~(arr_7 [i_0 + 3] [i_0] [i_1] [i_3]))) : (((arr_5 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 - 3] [i_0 - 1]) : (arr_7 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 4])))));
                }
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_24 = ((~(arr_14 [8] [i_4 + 1] [i_4] [i_0 - 2])));
                    var_25 = var_4;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_26 = ((!(arr_11 [i_0] [i_0 + 1] [i_4 + 1] [i_0])));
                        var_27 = (arr_3 [i_0] [i_1] [i_4 - 3]);
                        var_28 = (arr_18 [i_0 - 2] [i_0]);
                        var_29 = ((~(arr_14 [i_0 - 3] [16] [16] [i_5])));
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_30 = (arr_19 [i_0 + 4] [i_6 + 2] [14] [i_0 + 4] [18] [i_4]);
                        var_31 = (arr_11 [i_0 - 2] [20] [i_4 + 1] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_32 ^= (min(var_1, ((min((arr_4 [3] [6] [i_7]), (arr_4 [i_0 + 2] [i_4 - 2] [18]))))));
                        var_33 = ((!(arr_9 [4] [i_1] [i_4 + 1] [i_1])));
                        var_34 = ((0 & (var_12 > 23)));
                    }
                }
                arr_25 [i_0] = ((!((((arr_1 [i_0 - 3] [i_1]) >> ((((min(32767, (arr_12 [15])))) - 80)))))));
                var_35 = ((15863 ? 3651783447 : 255));
            }
        }
    }
    #pragma endscop
}
