/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_10 &= ((((arr_5 [i_0]) ? 14308364668070721642 : (arr_5 [i_0]))) | (arr_5 [i_0]));
                    var_11 = arr_0 [i_1] [i_1];
                    var_12 = (max(var_12, var_3));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_13 = -1;
                    arr_11 [i_1] [i_1] [i_1] = (((arr_3 [i_0] [0] [i_0]) ? ((((14308364668070721656 != (arr_2 [i_0] [i_3]))))) : ((1320400548 ? (arr_3 [i_0] [i_0] [i_0]) : 7597433588635770422))));
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = 71;
                                arr_21 [i_4] = ((9726787160945786621 ? ((2376740959 - (arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))) : (((-(-2147483635 <= 27210))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= (((!-530927211) ? ((-17124 ? 5 : 61)) : var_7));
    var_16 = max(var_2, var_8);
    var_17 = (max(var_17, var_5));
    #pragma endscop
}
