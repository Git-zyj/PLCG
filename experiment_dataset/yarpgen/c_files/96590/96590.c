/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (max(-3833007660934431359, (var_6 > var_2)));
    var_16 = 41258;
    var_17 = (max(var_17, (((-var_7 / (((((var_6 ? var_7 : var_9))) ? ((max(26974, 3295836865))) : -5536716597653795086)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= 999130431;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_19 *= ((((max((arr_10 [i_1 + 1] [i_1 - 1]), ((max(1, var_11)))))) || ((max(((((arr_6 [i_3]) && 512))), (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                        var_20 = 124;
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((var_8 ? ((((max(38583, (arr_12 [i_2] [i_2])))) ? -var_9 : (arr_1 [i_4 - 1]))) : (arr_4 [12] [i_1 + 1] [13])));
                        var_21 ^= 3833007660934431358;
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_22 = var_1;
                        arr_17 [i_0] [i_0] [i_2] [i_5 + 1] = ((~((((max(1913665494, (arr_5 [14] [i_1] [i_2])))) ? ((((32767 != (-2147483647 - 1))))) : (arr_3 [i_5] [i_1] [i_1])))));
                        arr_18 [14] [5] [i_2] [7] = (max((((!((((arr_3 [i_0] [i_2] [i_0]) ? -30377 : var_12)))))), (max((arr_2 [i_0] [i_0]), (arr_7 [i_5 - 1] [i_2 - 1] [i_1 - 2] [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
