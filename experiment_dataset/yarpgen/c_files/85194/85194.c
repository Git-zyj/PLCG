/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (max(((min(var_3, var_7))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_1] = (max((((!(arr_1 [i_1] [i_0])))), (((arr_1 [i_0] [i_1]) ? var_3 : var_8))));
                var_13 = ((((max(var_2, ((var_4 ^ (arr_3 [i_0] [i_1])))))) ? ((min((min(var_3, var_2)), (!4241506291425489731)))) : (var_10 - var_6)));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] [i_0] = (~1);
                    var_14 &= ((max(((-(arr_5 [i_0] [i_0] [i_2]))), (arr_0 [i_2]))));
                    var_15 = (min(var_15, (((max(((var_11 ? var_10 : (arr_9 [i_0] [i_1] [i_2] [i_2])), (max(var_7, var_3)))))))));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_16 = var_5;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_17 ^= (arr_4 [i_5 + 2] [i_5] [i_5]);
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_5] = (min(1, ((((arr_3 [i_4 - 1] [i_5 + 2]) && (arr_7 [i_4 + 1] [i_4]))))));
                                arr_20 [i_1] [i_5 - 1] [i_4] [i_3] [i_1] [i_1] = -var_5;
                                var_18 *= (max((((min(var_1, var_7)) - ((min((arr_14 [18]), var_11))))), (arr_9 [i_0] [i_3] [i_3] [i_0])));
                            }
                        }
                    }
                    var_19 = ((((min((((arr_5 [i_0] [i_1] [i_1]) ? var_7 : var_6)), ((var_6 ? (arr_4 [i_3 + 1] [i_1] [i_0]) : var_7))))) ? (((!(~var_6)))) : ((-(((arr_5 [i_0] [i_0] [i_3]) ? var_2 : var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
