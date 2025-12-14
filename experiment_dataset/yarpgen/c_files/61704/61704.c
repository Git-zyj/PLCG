/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = (max(((max(34889, var_0))), (min(var_8, 1714635999))));
                var_13 = ((((max(var_8, -1714636000))) ? var_2 : 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((219633995756811976 || 4431198880197447793) ? (max(-1714636006, 4294967295)) : 31674);
                            var_14 = var_10;
                        }
                    }
                }
            }
        }
    }
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_16 = ((min((4431198880197447793 / var_5), ((max(1714636000, var_10))))));
                var_17 = ((var_11 ? ((var_8 & (var_1 >= 12251))) : 1));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_19 [i_4 + 1] [i_5] [i_4] [i_5] = ((4294967295 ? 0 : var_1));
                    var_18 = (1 << var_6);
                    var_19 = (112 ^ 0);
                    arr_20 [i_5] [i_4] [i_4] [i_5] = (((63 >= var_4) ? 0 : var_0));
                    var_20 = ((203 ? var_6 : var_3));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_23 [17] [i_4] [i_7] [i_4] = var_2;
                    var_21 = ((((((12 ? var_11 : var_5))) ? var_9 : ((var_8 << (var_8 - 24334))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 = -66;
                                var_23 ^= ((((var_11 ? ((((-13 + 2147483647) >> 1))) : 586960896021624371)) <= (var_11 ^ var_10)));
                                arr_29 [i_4] [i_5] [i_7] [i_8 - 1] [i_4] = (((max(var_5, -1714636000)) > (0 > var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
