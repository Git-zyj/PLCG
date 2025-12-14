/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((var_2 ? var_3 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = 614467645438762322;
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4 - 1] [i_3] [i_3] = (max((arr_9 [i_4 - 1] [i_0] [i_0] [i_4 - 2] [i_4 + 1] [11]), ((((arr_11 [i_4 - 1] [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4]) - (arr_11 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 1] [i_4 + 1] [3]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [8] = min(4294967295, ((((((6 | (arr_8 [i_0] [i_1] [i_2] [i_3])))) && (arr_1 [i_0])))));
                            }
                        }
                    }
                }
                var_13 *= ((((-((var_9 ? 6 : var_2))))) && ((((arr_10 [i_0] [i_1] [22] [8]) ? var_8 : 10737241577327368110))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_14 = (max(var_14, (~var_7)));
                            arr_21 [i_0] = arr_10 [i_0] [i_1] [i_5] [i_0];
                            arr_22 [i_6] [i_5] [i_0] [i_1] [i_0] = ((((arr_19 [i_5 + 3] [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_5]) & ((max((arr_12 [20] [i_1] [i_5] [2] [i_5] [1]), var_3))))));
                        }
                    }
                }
                arr_23 [i_0] [i_0] = (~0);
                var_15 = (min(var_15, (-4294967278 & 8081470500586738953)));
            }
        }
    }
    var_16 += 8081470500586738953;
    #pragma endscop
}
