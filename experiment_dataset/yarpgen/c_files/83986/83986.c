/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(106, -64));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 += (((-720117610691592974 | 25294) ? ((77 ? 1618097914357134925 : 43881)) : ((((!var_5) % (arr_0 [i_0]))))));
        var_13 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = -43876;
                    var_14 = ((((140703128616960 ? -1014014708 : 65024))) ? var_5 : (arr_1 [i_0]));
                    var_15 = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        var_16 = (((arr_14 [i_4] [i_5] [i_6 + 1] [i_6 + 3]) > (arr_11 [i_6 - 1])));
                        arr_18 [i_3] [i_3] [1] [i_3] = var_8;
                        var_17 = (min(var_17, (arr_0 [i_6 + 2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_29 [i_3] [i_7] = (((arr_26 [i_3] [i_7] [9] [9]) ? (arr_3 [i_3] [i_7] [i_7]) : ((((var_1 == (arr_17 [i_3] [i_3] [i_7] [12] [i_9] [i_9])))))));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_18 = (-(arr_21 [i_3] [1] [i_3]));
                            var_19 = (min(var_19, ((((arr_9 [i_3] [i_7]) ? (arr_9 [i_9] [i_9]) : var_8)))));
                        }
                        arr_32 [i_3] [i_3] = ((-(arr_27 [i_3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
