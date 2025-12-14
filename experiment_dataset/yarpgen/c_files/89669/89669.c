/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((2448510103 ? (arr_0 [i_0]) : 126));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [8] [8] [i_0] [i_4] [i_4] = ((!(arr_1 [i_3 - 1])));
                            var_12 = (arr_13 [i_3] [0] [1] [i_3 + 2] [i_3 + 1]);
                        }
                        arr_17 [i_0] [i_3] = ((-((-(arr_14 [i_3 + 2] [i_3 + 2] [15] [i_3])))));
                        var_13 -= (arr_9 [i_2] [i_2] [i_1] [i_2]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_14 = (!-45);
                            var_15 = (arr_18 [i_5] [i_3 + 1] [i_2] [i_1] [i_0]);
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] [i_6] = var_0;
                            arr_26 [i_0] [i_1] [i_2] [i_0] [3] = -96;
                            arr_27 [i_0] [i_0] [i_0] [i_0] [15] = (((arr_10 [i_3 - 3] [1]) ? (arr_10 [i_3 - 1] [i_3 - 1]) : (arr_10 [i_3 - 2] [i_3])));
                            var_16 = var_8;
                        }
                        arr_28 [i_0] [i_0] [i_1] [11] [i_1] = (~576320014815068160);
                    }
                }
            }
        }
        arr_29 [i_0] = var_2;
        var_17 = ((!(arr_9 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, 0));
        var_19 = 95;
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] [i_8] = (arr_18 [i_8 + 2] [i_8 + 1] [i_8] [i_8] [i_8]);
        var_20 = ((max((!var_4), ((65525 ? -554759200321872835 : 1)))));
        var_21 = -18;
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            {
                var_22 += ((((((var_9 ? 1 : (arr_37 [i_9 - 1])))) ? ((max(1, (arr_18 [i_9] [i_10] [21] [i_10] [i_9 - 1])))) : var_3)));
                arr_39 [i_9] = ((-((-(arr_9 [i_10] [i_10] [i_10] [i_10])))));
            }
        }
    }
    var_23 |= -65;
    var_24 = (min(var_24, ((min(var_10, ((~(~var_10))))))));
    #pragma endscop
}
