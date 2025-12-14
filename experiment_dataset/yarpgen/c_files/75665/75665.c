/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((~(var_5 & var_13)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((-((((max(var_3, 59472))) ? (min(24, 2013265920)) : (arr_2 [i_0 + 3] [i_1] [i_0 + 3])))));
                var_16 += 17567;
                var_17 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min(var_7, ((var_4 ? var_8 : (arr_4 [4] [i_0]))))) : (min((((arr_3 [i_3] [i_1]) ? 671088681 : (arr_1 [i_0 + 2] [i_1]))), ((16 ? var_11 : var_1))))));
                            var_19 = (max(var_19, ((((242 == 237) != 57975)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = ((-4604467046237730595 ? (117 / 136) : ((((max(var_0, var_4)) <= (!var_3))))));
    var_22 = (~var_0);
    #pragma endscop
}
