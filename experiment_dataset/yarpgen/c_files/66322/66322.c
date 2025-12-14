/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 -= (!-var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= -19119;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_13 = ((1 ? (!var_6) : (!12673)));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_14 = -12673;
                            var_15 *= max((((arr_8 [i_3 + 1] [i_2 + 3] [i_2 - 2] [i_4 + 2] [i_2 + 2] [i_4]) ? (arr_6 [i_3 + 1] [i_4 + 2] [i_4] [i_3 + 1]) : (arr_11 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))), (((!(arr_11 [i_2 + 3] [i_2 - 3] [i_2 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                            arr_12 [i_2 + 3] [4] [i_2] [i_4] [i_2 + 3] = (((((((max(-4088919022362906881, var_9))) ? ((((!(-9223372036854775807 - 1))))) : (arr_9 [2] [i_0] [i_2] [i_2] [i_1] [i_0])))) ? ((((var_1 < var_0) < (arr_0 [i_2])))) : ((~(arr_2 [i_2 - 1])))));
                        }
                        arr_13 [i_0] [i_1] [i_2 + 3] [i_0] = (arr_0 [i_2]);
                    }
                }
            }
        }
        arr_14 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = -2115368891;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_16 = 12673;
                    var_17 = (arr_8 [i_5] [i_6] [i_5] [i_5] [i_6] [i_7]);
                    arr_24 [i_5] [i_6] = 12672;
                }
            }
        }
        arr_25 [i_5] = (arr_1 [i_5] [i_5]);
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_18 = (((((~1) <= (((arr_26 [i_8] [i_8]) ? var_8 : -2160054071466275934)))) ? ((((69 == var_1) < (arr_28 [i_8] [i_8])))) : (16043 - var_4)));
        var_19 = ((((var_4 ? var_7 : (~var_5))) / var_7));
    }
    var_20 = -var_2;
    #pragma endscop
}
