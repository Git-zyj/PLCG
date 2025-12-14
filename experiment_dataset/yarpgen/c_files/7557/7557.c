/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 118;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] [i_3] = (var_5 * var_4);
                                arr_14 [i_4] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((((-((max(var_7, 117))))) == ((min(1, -111)))));
                                var_12 = ((((max((arr_12 [1] [i_0] [i_3] [i_3] [i_0] [i_3]), 8226))) ? var_8 : (((arr_5 [i_0] [i_0]) ? 1 : (arr_0 [i_2] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] = (((((((((arr_10 [i_6] [i_0] [1] [i_1] [i_0] [i_0]) || 34396))) == (arr_16 [8] [8] [i_5 - 1] [i_5] [i_5 + 1])))) < (arr_5 [i_5 - 1] [i_0])));
                                arr_22 [i_2] [i_0] [i_0] [i_0] = 8246;
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = (((-66 >= 1) ? (!var_5) : ((((arr_6 [i_5 + 1] [i_5] [i_0] [i_0]) < (arr_6 [i_5 + 1] [i_5] [i_0] [i_5]))))));
                                var_13 = (min((((((54785 ? var_1 : 51971))) ? ((max(var_9, (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) : 21309)), (1 & -108)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_14 = (min(var_8, ((min(var_10, 1)))));
                                var_15 = 51013;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (-8214 % 14);
    var_17 = var_2;
    #pragma endscop
}
