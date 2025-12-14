/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = (((arr_4 [i_0] [i_0] [i_0]) ? var_10 : -311326505));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((arr_3 [i_2]), var_9));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = var_8;
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] &= ((((((87 >= var_12) | var_1))) ? var_9 : (arr_8 [i_0] [i_0] [i_1])));
                var_17 = (max(var_17, ((((((-7918784225209781048 ? 7918784225209781057 : (((arr_3 [i_0]) ? -7918784225209781048 : 0))))) ? ((min(((1 >> (-88 + 103))), 87))) : (min((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), var_14)))))));
            }
        }
    }
    var_18 = (max(((var_3 & (~24963))), 109));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_25 [i_4 + 1] [i_4 + 1] [i_4 - 2] = min((arr_15 [i_4 - 2]), 86);
                    var_19 = (((--152) ? ((((1 ^ 107) & (arr_17 [i_4] [i_4 + 2])))) : (min((((arr_24 [i_4] [i_5] [i_6]) ? (arr_18 [i_6] [i_4]) : (arr_23 [i_6]))), (~var_9)))));
                    arr_26 [i_4] = ((var_3 ? ((var_8 ? var_7 : ((((arr_16 [i_5]) != 99))))) : (arr_17 [i_4] [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
