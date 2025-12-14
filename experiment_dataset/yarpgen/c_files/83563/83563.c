/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (~var_3);
                    var_16 = (((var_4 + 9223372036854775807) << (((var_12 ^ var_0) - 1470886873))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                var_17 = (1 * 4466186514554871556);
                arr_16 [i_3] [i_3] = (max((max(0, var_4)), ((((((var_4 & (arr_4 [i_3] [i_3])))) ? var_10 : ((var_15 ? (arr_5 [6]) : var_6)))))));
                var_18 = ((!(((4294967274 ? var_3 : var_5)))));
                var_19 = (min(var_19, ((((((arr_4 [i_3] [i_3]) ? 11005 : (arr_12 [i_3] [i_4 + 1]))) << ((((((4091169405 ? 89 : 4294967274))) < -var_15))))))));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_20 = (max(((((-3491 < -1) == (max(var_3, (arr_3 [i_5])))))), (max((arr_18 [i_3] [i_4 - 2]), ((min(166, var_10)))))));
                    var_21 = ((-var_14 <= (((var_9 < (arr_17 [i_4 - 3]))))));
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    arr_22 [i_6] [10] [10] = (min(1, ((var_5 << (!-1552118755618744770)))));
                    var_22 = (min(var_22, (((((((arr_6 [i_3] [i_6 - 3] [i_3] [i_3]) ? var_11 : (arr_6 [9] [i_6 - 2] [i_6] [i_6 - 3])))) & (var_5 ^ var_15))))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_23 = (min(var_23, 1));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_33 [1] [i_9] [i_9] [10] [i_9] = (((max((arr_18 [i_4] [i_4 - 2]), -var_5)) < (((((arr_2 [i_4 + 1]) + 9223372036854775807)) << var_13))));
                                var_24 = ((((max(4071038811, 14061542587236419586))) ? ((var_2 ? (arr_17 [i_8 + 1]) : (arr_17 [i_8 - 1]))) : (((arr_17 [i_8 - 1]) ? var_6 : -2355))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
