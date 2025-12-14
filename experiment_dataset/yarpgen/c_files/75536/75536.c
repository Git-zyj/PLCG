/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(-27104, (-2147483647 - 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_1] [i_1] [i_0] [i_3] [i_4 - 1] = (min((arr_11 [i_1] [i_4 - 2] [i_4] [i_0] [i_4 - 2] [i_4 - 2]), (arr_8 [i_4 + 1] [i_0] [i_4] [i_4] [i_4])));
                            var_17 = ((min((max(var_14, var_0)), (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_4]))));
                            var_18 = var_14;
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((max((((max(var_9, var_0)))), (min((arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]), (max((arr_9 [i_0] [i_1]), var_3)))))))));
                            var_20 = (max(var_0, (min((arr_9 [i_0] [i_3]), (arr_14 [i_0] [i_0] [i_3] [i_3] [i_5] [i_5 - 1] [i_2])))));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (max(var_21, (-2147483647 - 1)));
                            var_22 = ((-(arr_1 [i_6])));
                        }
                        var_23 += (min((min((-2147483647 - 1), (min(507830838, 507830838)))), (arr_14 [i_2] [i_2] [i_3] [i_0] [i_0] [i_2] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_24 = (max((max(26461, 258048)), ((max(var_7, (arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_7]))))));
                        var_25 -= (min(((max((!var_1), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])))), (~var_5)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_26 = (min(var_9, -14709));
                        var_27 |= (-(max((min((arr_15 [i_0] [i_2] [i_1] [i_1] [i_2] [i_8] [i_8]), (arr_5 [i_2] [i_2] [i_2]))), (max((arr_15 [i_0] [i_2] [i_0] [i_8] [i_2] [i_2] [i_8]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }

                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        arr_29 [i_1] [i_0] [i_1] [i_9] [i_0] = (max(-554153860399104, (arr_20 [i_9 + 3] [i_1] [i_2] [i_9] [i_2] [i_2])));
                        var_28 = (min(var_28, (((-(arr_25 [i_0] [i_1] [i_2] [i_0] [i_9]))))));
                        var_29 = (arr_5 [i_0] [i_1] [i_2]);
                        arr_30 [i_0] [i_1] = (min((arr_4 [i_0] [i_0] [i_0] [i_9]), (arr_17 [i_0] [i_0] [i_1] [i_1] [i_9] [i_9 - 2] [i_9])));
                        var_30 = (max(1, 4294967290));
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_31 = (arr_7 [i_0] [i_0] [i_0] [i_2] [i_10 + 1] [i_10]);
                        var_32 ^= (max((min(((max(39, 154))), (arr_21 [i_10]))), (max(14240748613453023182, 50833))));
                    }
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        var_33 = (min(var_33, (arr_9 [i_1] [i_2])));
                        var_34 = (-(((!(arr_6 [i_1] [i_11 + 3] [i_0] [i_11 + 4])))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = var_15;
                        var_35 += (arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_11]);
                        var_36 += (max((arr_11 [i_1] [i_1] [i_1] [i_2] [i_11 + 1] [i_1]), (!-var_15)));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_0] = max((min((min(var_5, (arr_9 [i_12] [i_1]))), var_3)), (((~(arr_19 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1])))));
                        var_37 = (max(var_37, ((~(arr_32 [i_2] [i_2] [i_1] [i_2] [i_12] [i_12])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
