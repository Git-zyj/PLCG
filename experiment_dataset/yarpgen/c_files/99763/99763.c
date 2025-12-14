/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = (min((!var_4), (max(((-18938 ? var_13 : var_5)), var_8))));
    var_16 = (min(var_9, ((((~var_4) <= var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min(18937, 1));
                                var_18 = var_0;
                                var_19 = (max((min(var_10, var_5)), ((min(4154664007, (arr_6 [i_0] [13] [i_4]))))));
                                var_20 *= (((((var_5 && var_0) ? (15198536693079699977 < 1) : (arr_8 [5] [i_3] [4] [4])))) % var_9);
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [8] = (-18926 < 18937);
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
