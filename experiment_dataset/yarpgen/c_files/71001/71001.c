/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            var_11 = ((0 ? 27 : 90));
            arr_6 [i_0] [i_1 + 2] = (-5937 ? (!21214) : ((max(var_9, var_9))));
            var_12 = (((((28858 ? -1 : 12))) ? (~29464) : (~7)));

            for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_13 = (!1);
                            arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2 + 1] [i_0] = 590687157;
                            arr_15 [1] [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((1238203930571568035 ? -111 : (-2147483647 - 1)));
                            var_14 += 8240731671053292417;
                            arr_16 [i_4] [i_2 + 1] [i_0] [4] [i_4] = (max(4149770893, 3));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_15 = (3 / 1665547560);
                            var_16 = -587;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
            {
                var_17 = (min(var_17, var_5));
                arr_24 [i_0] [6] [i_7] = (((((arr_10 [i_0 - 1] [i_1 + 3] [i_1] [i_1 + 3] [i_0]) ? (arr_10 [i_0] [1] [i_1] [i_7 + 1] [i_0]) : (arr_10 [i_0] [i_7 + 1] [i_0] [i_0 + 2] [i_0]))) | (((arr_10 [10] [i_0] [i_1 - 4] [i_7 + 1] [i_0]) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_1 - 2] [i_0]) : (arr_10 [i_0] [i_1 + 2] [i_1] [i_1] [i_0])))));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_31 [i_0] [i_8] [i_0] = (max((arr_17 [i_9] [1] [i_0 + 1] [i_9] [i_8 - 1] [i_0]), (-24 + 15)));
                    var_18 = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 8;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] = ((33554431 ? 0 : 185));
                                var_19 ^= -22;
                                var_20 = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_21 = (arr_21 [i_0 - 1] [i_0]);
                                var_22 = 4294967288;
                                var_23 &= (~0);
                                arr_46 [i_13] [i_8 - 1] [i_0] [5] [i_13] = (-1 / -7);
                                var_24 = max(693, -7917309191451041601);
                            }
                        }
                    }
                }
            }
        }
        var_25 = arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    var_26 = var_2;
    var_27 = (max(var_27, (!1)));
    var_28 = var_5;
    #pragma endscop
}
