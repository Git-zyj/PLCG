/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_11 &= (min((arr_5 [i_3]), ((var_1 ? (arr_5 [i_3]) : (arr_6 [i_0 + 3] [i_1] [i_0 + 2])))));
                            arr_9 [i_1] = (arr_6 [i_0] [i_1] [5]);
                            var_12 = ((((arr_4 [i_1] [i_2] [4]) ? (((arr_4 [i_1] [i_1] [i_2]) ? (arr_4 [i_1] [i_2] [i_2]) : (-32767 - 1))) : (arr_4 [i_1] [i_2] [i_1]))) - (((arr_8 [i_3] [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_0]) : ((((arr_6 [16] [8] [21]) <= (arr_6 [i_1] [0] [i_3])))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    var_13 = (arr_3 [i_1]);
                    var_14 += ((-(134217727 >= 17758075947163407712)));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_21 [i_0 + 1] [i_1] [i_1] [i_6] [i_7] = (min((max(-134217736, ((var_6 ? (arr_6 [i_0] [i_7 - 2] [i_5]) : (arr_7 [i_0 + 1] [i_1] [i_5] [i_6] [i_1]))))), 19137));
                                var_15 = -13801747649396641891;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] = (((~(((arr_11 [i_0] [20] [i_5]) * (arr_4 [i_1] [i_1] [i_5]))))) % var_6);
                    arr_23 [15] [i_1] [i_5] [i_5] = min(154, 134217732);
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_16 = ((var_5 ? (((~(arr_3 [i_1])))) : ((var_9 ? ((((arr_2 [i_0] [i_1] [16]) ? var_4 : var_10))) : (((arr_8 [i_0] [i_1] [i_1] [i_8]) ? (arr_17 [i_0] [i_0] [i_0] [i_1] [i_8]) : (arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_8])))))));
                    var_17 = (max(var_17, var_2));
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((((var_5 ? var_5 : var_5))) ? var_10 : -var_3))) || ((min(((min(var_3, 1))), -13801747649396641911)))))));
    #pragma endscop
}
