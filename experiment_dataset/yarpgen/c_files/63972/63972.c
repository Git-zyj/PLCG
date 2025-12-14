/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_0));
                    arr_8 [i_0] [i_1] = (max(-1701468854, ((max(1, 26629)))));
                    var_17 = (max(var_17, (((26618 ? 17991939099011453701 : -26629)))));
                    arr_9 [i_0] [i_1] = ((~(min(((((arr_2 [i_0]) && var_15))), ((1108785862137183679 ? -17883 : 676163434))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_3] [i_3] = 1496112531;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_24 [i_4] |= ((((-1701468854 != (max(676163438, var_2)))) ? (max(((var_6 ? var_11 : 11652713583045814405)), ((min(var_7, var_6))))) : (((24817 << (8517077637431488990 - 8517077637431488987))))));
                                var_18 = arr_19 [i_3] [i_3] [i_3] [i_3] [i_3];
                            }
                        }
                    }
                    var_19 = (max((((var_11 != (((arr_12 [i_3]) + var_9))))), ((min(-26637, 454804974698097914)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_20 -= var_15;
                                var_21 -= (((((var_7 ? ((max(var_1, var_11))) : ((2870617529926392910 ? var_10 : (arr_27 [i_8])))))) ^ ((var_15 ? ((var_2 ? var_2 : var_9)) : (arr_15 [i_8])))));
                                arr_31 [1] [i_3] [1] [i_8] = ((var_2 / var_6) ? ((0 ? -438722949 : (arr_18 [i_3] [i_3] [i_5] [i_8] [i_9]))) : ((-(arr_18 [i_3] [i_3] [i_5] [i_3] [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((!-438722949) ? 107 : var_13)) == (!676163434)));
    var_23 = (max(((max((((1 ? var_7 : -1701468854))), 1108785862137183667))), (((((var_11 ? var_15 : var_8))) ? 26628 : ((var_9 ? var_1 : var_13))))));
    #pragma endscop
}
