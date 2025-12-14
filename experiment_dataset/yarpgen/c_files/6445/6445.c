/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_4, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_17 &= (((arr_12 [i_1] [i_1] [i_2] [i_3] [i_2] [i_1]) & (arr_9 [i_0] [1] [i_3])));
                        arr_14 [i_1] [i_3] [i_1] [i_1] [i_1] = var_11;
                        var_18 = (((arr_3 [i_1 + 1]) % (arr_12 [i_0] [i_0] [i_1 + 1] [i_1 + 4] [i_0] [i_3 + 2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_19 = (min(var_19, (arr_15 [i_1 + 2] [i_1 + 2] [17] [i_4])));
                        var_20 = arr_6 [i_0] [i_0];
                        var_21 *= (arr_2 [i_1]);
                        arr_19 [i_1] [i_1] [i_1] = ((0 ? 0 : 62813774020650454));
                        var_22 = arr_8 [i_1 + 3] [i_1 + 4] [i_4 + 1] [i_4 + 1];
                    }
                    var_23 = (min(var_23, ((((min((max((arr_3 [i_0]), var_11)), (arr_3 [i_1]))) + (arr_1 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] = (arr_16 [1] [i_6] [i_6 - 1] [i_6 - 1] [1] [1]);
                                var_24 = (((arr_21 [i_7] [i_7]) ? ((((max((arr_23 [i_9] [i_7] [i_5]), var_3))) ? (arr_26 [2] [i_8] [i_5] [i_8] [i_9] [6]) : ((((arr_13 [i_5] [i_5] [0] [i_5]) % (arr_27 [i_5] [2] [i_5] [1] [i_5] [i_9])))))) : (arr_13 [i_6 + 1] [i_5] [i_6] [i_6 - 1])));
                            }
                        }
                    }
                    arr_31 [i_7] [i_7] = (arr_29 [i_6] [i_7] [i_7] [i_6] [i_6]);
                }
            }
        }
    }
    var_25 = var_8;
    var_26 = var_12;
    #pragma endscop
}
