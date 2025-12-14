/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (1 & 135);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((!(!1)));
                                var_19 = (max(((-(arr_6 [i_1] [i_2] [i_2] [i_4 - 2]))), (((max(var_13, (arr_2 [i_3])))))));
                                var_20 = ((var_14 ? (arr_10 [i_0] [i_2] [9] [i_0] [9] [i_0] [i_0]) : ((min(7288078896174854215, 1554094728)))));
                            }
                        }
                    }
                    var_21 = -var_13;
                    var_22 = (min(var_22, ((min((max(var_15, ((30253 ? 2147483647 : 14)))), (((((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_1]) ? var_13 : var_3))) < (arr_1 [i_2])))))))));
                    var_23 = (arr_10 [i_0] [i_2] [i_0] [i_1] [i_2] [i_2] [i_2]);
                    var_24 = ((-(arr_2 [i_1])));
                }
            }
        }
    }
    var_25 = ((((31489 ? (var_11 && var_1) : ((var_1 ? var_0 : var_7))))) ? (((!(!var_8)))) : ((min((var_1 && 88), (!var_12)))));
    var_26 = 30254;
    #pragma endscop
}
