/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(var_14, (((~0) - (!var_5))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (((0 || var_17) ? ((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))) : 1));
        var_22 = ((~(((!(arr_0 [i_0] [1]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 -= (((((!(0 || var_14)))) - ((~(((!(arr_5 [i_1] [i_1]))))))));
        var_24 = ((((((((1 ? var_2 : (arr_5 [i_1] [i_1])))) ? ((1 ? 1 : var_5)) : (0 != var_7)))) ? (min((((arr_5 [i_1] [i_1]) ? var_4 : (arr_2 [i_1] [i_1]))), var_9)) : (((min(1, 1)) ? (~var_5) : ((var_4 ? var_5 : (arr_3 [i_1] [i_1])))))));
        var_25 ^= (((arr_2 [i_1] [i_1 - 1]) ? -0 : ((1 << (arr_3 [1] [i_1 - 1])))));
        var_26 -= (arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_27 *= (((arr_6 [1]) ? -1 : (!1)));
        var_28 = var_18;
        var_29 = ((-(arr_0 [i_2] [i_2 - 1])));
        var_30 ^= var_5;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_31 = ((var_11 ? (arr_9 [i_2]) : (arr_2 [i_2 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_6] = 1;
                                var_32 += 1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                {
                    var_33 = (min(var_33, (((var_17 ? (arr_4 [1]) : ((var_3 ? var_2 : 1)))))));
                    var_34 = (min((1 && var_19), (min(((min(0, var_12))), -1))));
                }
            }
        }
        var_35 = (min(var_35, ((((var_3 ? 1 : var_18)) != (((!(((1 ? var_14 : var_10))))))))));
    }
    #pragma endscop
}
