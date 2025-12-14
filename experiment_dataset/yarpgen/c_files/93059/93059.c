/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-(!-31059)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [10] [i_0] [i_1] = ((!((!(!var_2)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [3] = (+-33821);
                                var_11 = (max(var_11, var_3));
                                var_12 *= ((!(((-(arr_2 [i_0] [i_0] [10]))))));
                                var_13 = var_3;
                                arr_12 [9] [i_0] [i_2] [i_2] [2] [i_2] = ((-((-(arr_0 [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [6] [i_6 + 1] &= (((-(arr_8 [i_5] [6] [8] [i_5] [0]))));
                                var_14 = (!var_5);
                                var_15 ^= (~56667);
                            }
                        }
                    }
                    var_16 = -var_2;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_17 = ((~(!var_9)));
                        var_18 = (+-61455);
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_28 [i_0] [i_0] = ((-(!61455)));
                        var_19 = ((-((-(arr_10 [6] [i_9] [i_7] [i_1] [8])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_20 = ((~(~var_3)));
                        var_21 = ((~(!17175)));
                    }
                    arr_32 [i_0] [i_1] [i_0] [i_7] = -56720;
                    var_22 = ((!(!56677)));
                    arr_33 [i_1] [i_7] [i_7] [i_0] = ((~(~var_7)));
                }
            }
        }
    }
    var_23 &= ((!((!(!var_7)))));
    #pragma endscop
}
