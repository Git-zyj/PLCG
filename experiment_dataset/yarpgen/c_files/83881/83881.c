/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((max((arr_2 [i_1] [i_0 - 1]), (max((arr_2 [i_1] [i_0 + 2]), (max(var_12, var_11)))))))));
                arr_6 [i_0] [i_0] = ((~((1 | ((max((arr_2 [i_0] [i_1]), var_1)))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 -= max(0, ((!(1 && 1899452002))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_4] = ((+(((((arr_12 [i_3] [i_2] [i_1] [i_0]) ? 1 : 1942186197)) * (arr_4 [i_0 + 2])))));
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_0] = (max((4294967276 || 0), (max((max(var_4, var_9)), ((1 ? 2169448565 : (arr_10 [i_3 - 1] [i_0] [i_0])))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = ((((4294967276 ? 3849857211 : 5548841))));
                    var_15 = (min(var_15, ((max((arr_0 [6] [6]), ((0 ? 3849857211 : (!1))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_6] [i_0] [i_1] [i_0 + 1] = ((arr_25 [i_7] [i_1]) < (arr_11 [i_7] [i_0] [2] [i_1] [i_0]));
                                var_16 = arr_13 [i_7] [i_5] [i_0];
                                arr_27 [i_0] [i_6] [i_0] = (((arr_11 [i_7] [i_7] [i_6 + 1] [i_6 - 1] [i_0 + 2]) ? (arr_23 [i_6 + 1] [i_6] [i_0] [i_6] [i_0] [i_5] [i_5]) : (arr_9 [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_17 = (~0);
                                var_18 *= (((arr_25 [i_8] [i_0]) ^ (arr_25 [i_8] [i_1])));
                                arr_34 [i_0] = (((arr_5 [i_9 - 1] [i_0 + 1]) * (var_4 <= 1)));
                                var_19 += var_11;
                                arr_35 [i_9 - 1] [i_8] [i_0] [i_1] [i_0] = (arr_10 [i_9] [i_0] [i_0 + 2]);
                            }
                        }
                    }
                    var_20 = ((!(!var_2)));
                }
            }
        }
    }
    var_21 = (max(var_21, ((((-var_9 ? var_3 : (max(var_1, var_8))))))));
    var_22 = ((((((~var_7) | (~var_12)))) ? (min(var_1, var_0)) : (~4294967295)));
    #pragma endscop
}
