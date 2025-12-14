/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = ((((min((arr_4 [i_0 + 1] [i_0 - 2] [22]), (arr_8 [i_2 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2])))) >= ((max(121, (arr_4 [i_0 + 1] [i_0 + 2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((var_10 ? (((((arr_1 [i_0]) ? -3259388834035294724 : 32747)) + 111)) : (!75)));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_0] = (((((var_12 ? (arr_4 [i_2 - 1] [i_2] [i_2 - 1]) : 64512))) ? (arr_4 [i_2 + 1] [5] [5]) : ((max((arr_4 [i_2 + 1] [12] [i_2]), 27632)))));
                                arr_17 [i_0] [i_0] [i_0] [14] [i_4] = (((-121 || 7460) == (min(4043802391, ((65535 ? var_11 : 9))))));
                                var_16 = (max(var_16, (((var_3 || (arr_2 [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = ((min((arr_21 [i_0] [9] [i_2 + 1] [i_6] [i_6 - 1]), var_7)));
                                arr_23 [i_0] = (min((min((arr_20 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0 - 1]), 0)), (((-2 + 2147483647) << (56 - 56)))));
                                var_18 *= ((((((arr_14 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [8] [i_2 - 1] [i_2 - 1]) != (arr_14 [i_2] [i_2 + 1] [19] [19] [i_2] [i_2] [i_2 - 1]))))) & (((arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [11] [i_2 + 1]) ? var_3 : (arr_14 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!((((var_6 ? 65535 : -1349884149)) != var_10))));
    var_20 = (var_4 >= var_7);
    #pragma endscop
}
