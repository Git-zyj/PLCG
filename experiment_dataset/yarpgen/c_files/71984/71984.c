/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -115));
    var_17 = 4294967274;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] |= (((arr_3 [i_0] [i_1] [i_1 - 1]) << ((((var_7 & ((max(var_9, var_12))))) - 56))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_10 [i_0 - 1] [i_1 - 1]) ? (arr_10 [i_0 + 2] [i_1 + 1]) : ((~(arr_10 [i_0 + 2] [i_1 - 1])))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((max((arr_1 [i_0 - 1]), var_0))) ? var_11 : ((~(arr_2 [i_1] [i_1 - 1] [i_2 + 1])))));
                                arr_17 [i_1] [i_1] [1] [i_3] [i_4] |= ((~((min((arr_8 [i_4] [4] [4] [i_1]), var_11)))));
                                arr_18 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = (((((arr_15 [i_0 - 1] [i_1]) ? (arr_1 [i_3]) : (max((arr_15 [i_1] [i_1]), (arr_6 [i_2])))))) && (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((6175397050923816814 || var_13) ? var_15 : var_9);
    #pragma endscop
}
