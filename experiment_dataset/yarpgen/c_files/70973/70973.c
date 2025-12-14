/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [3] [1] [i_0] = ((((-(arr_7 [i_0] [i_0] [i_0])))));
                                arr_14 [i_0] [i_4 - 1] [i_0] [i_3] = (((~-1) - (min((arr_3 [i_1 - 2] [i_2] [i_3 - 1]), var_11))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] [6] = (min((arr_0 [i_1 + 1] [i_1 + 2]), (arr_1 [i_1 + 1] [i_1 + 1])));
                                arr_22 [i_6] [i_0] [i_0] [i_1] [i_0] [i_0] = (max((arr_4 [i_5 - 1] [i_1 + 1] [i_1 + 1]), 12659));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] = (((24647 ? 13835 : (arr_16 [1] [1] [i_1 - 2] [i_0 + 2] [i_0 + 2]))));
                    arr_24 [i_0] [i_0] [i_0] = (((((arr_18 [i_2] [i_0 - 1] [i_1 - 1] [i_0 - 1]) && -var_1)) ? 9729 : (((arr_11 [i_2] [i_1 + 2] [i_0] [i_0] [i_0 + 1]) ? (((((arr_4 [i_0] [i_1] [i_2]) != var_9)))) : (arr_2 [i_1 + 2] [i_0 + 1])))));
                }
            }
        }
    }
    var_18 = ((((-var_1 ? var_11 : (((var_12 ? var_2 : var_13))))) == var_12));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            {
                arr_29 [i_7] = (arr_26 [i_8]);
                arr_30 [i_8] = ((((max((arr_0 [i_8 + 1] [i_8 + 1]), ((var_15 ? var_8 : (arr_15 [0] [i_7] [i_7] [i_7])))))) ? ((var_15 - (arr_2 [i_7] [i_8]))) : (((2 ? (arr_18 [i_8] [i_8] [i_7] [i_7]) : (((71 ? -3 : 32767))))))));
            }
        }
    }
    #pragma endscop
}
