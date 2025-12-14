/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 += (((max(var_15, (((arr_2 [i_0] [i_0]) ? (arr_1 [16] [i_0]) : 107)))) / (((min(-108, 126))))));
        var_21 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = ((((min((arr_2 [i_1] [i_1]), (min(126, var_4))))) ? (((min(-103, -13575)))) : ((((max((arr_4 [i_1] [i_2]), (arr_2 [i_1] [i_3])))) ? (arr_3 [i_2] [i_2]) : (arr_5 [i_1] [i_1] [i_1])))));
                    var_23 = (max(((((arr_7 [i_2]) ? -102 : (arr_6 [i_2] [i_2] [i_3])))), (min((arr_9 [5] [5] [i_2]), (min((arr_7 [i_1 - 2]), (arr_0 [i_1 + 2] [i_2])))))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = (max(var_24, ((min((arr_5 [i_4] [i_4] [i_4]), var_0)))));
            var_25 &= (arr_11 [i_4] [i_4] [i_4]);
            var_26 = min((arr_1 [i_1] [i_1]), (((((arr_6 [i_4] [i_4] [i_4]) ? 107 : (arr_10 [i_1] [i_4] [i_4] [17]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_27 = (((arr_11 [i_5] [1] [4]) ? ((((((arr_10 [i_1] [i_5] [i_6] [4]) >= (arr_2 [i_1] [i_1])))))) : (arr_14 [i_7] [i_6] [i_4])));
                            var_28 = (((arr_14 [i_1] [i_1 + 2] [i_1]) - var_13));
                        }
                    }
                }
            }
            var_29 = (max(((min(var_7, (arr_5 [i_1 + 2] [i_4] [i_4])))), (((((16383 ? (arr_10 [i_4] [i_4] [i_4] [i_4]) : (arr_2 [i_1] [i_4])))) ? ((max((arr_21 [i_1] [i_4] [i_4] [i_1] [i_1]), (arr_2 [i_1] [i_4])))) : -108))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_30 = (arr_11 [6] [18] [i_8]);
            var_31 = ((((var_12 ? var_11 : (var_11 % 39))) >= (((((min((arr_6 [4] [i_1] [i_1]), (arr_2 [11] [i_8])))) << (((!(arr_13 [0] [i_8])))))))));
            var_32 = (min(var_32, (((-(((arr_22 [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1]) >> (((arr_22 [i_1] [5] [i_8] [i_1 + 2]) - 5746)))))))));
            var_33 = -460046259;
        }
    }
    var_34 = (min(var_3, -126));
    #pragma endscop
}
