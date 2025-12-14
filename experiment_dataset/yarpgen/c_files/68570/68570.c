/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 5850445912308719143;
    var_16 = (min(var_16, var_6));
    var_17 = (max(var_12, var_0));
    var_18 &= (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (arr_7 [i_0]);
                            arr_13 [i_0] [i_0] [i_2] [i_0] = (((arr_9 [i_1] [i_1 + 2] [16] [i_0]) ? (arr_10 [6] [i_1] [i_1 - 1] [i_0] [i_1 + 1]) : (arr_5 [i_1] [i_1 + 2] [i_0] [i_1 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_20 = ((!(((~(arr_12 [i_5] [i_1 - 1] [i_5 - 1] [i_3] [i_0]))))));
                            var_21 = (((((max(56, (arr_14 [i_5] [i_3] [8] [9] [9] [6]))))) ^ var_9));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (((arr_14 [i_6 + 1] [i_6] [i_6 + 1] [1] [i_6] [i_6 + 1]) ? (arr_14 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1]) : (arr_11 [i_6 - 3] [i_6] [i_6 - 2] [9] [4] [i_6 - 2] [i_6 - 2])));
                            arr_18 [i_2] [i_2] [i_0] [i_2] [i_2] = (((arr_16 [i_0]) & (arr_16 [i_3])));
                            arr_19 [i_0] [i_0] [i_0] [i_2 + 2] [i_0] [i_0] = 45;
                        }
                        var_23 = var_11;
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        var_24 = 7640471183720576662;
                        arr_22 [i_0] = var_9;
                        arr_23 [i_7] [i_0] [i_2] [i_2] [i_0] [i_0] = arr_12 [i_0] [12] [i_1] [i_7] [i_0];
                    }
                    var_25 = ((((var_13 ? (!127) : -var_8)) * (arr_10 [i_0] [i_1] [i_1 + 2] [i_0] [i_1 + 2])));
                }
                var_26 = (min(-var_11, (205 * 255)));
                arr_24 [i_0] [i_0] = arr_4 [i_0];
                var_27 = (min(var_27, var_10));
                var_28 = var_12;
            }
        }
    }
    #pragma endscop
}
