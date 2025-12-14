/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = ((~((~(max(var_9, var_3))))));
        var_15 += var_0;
        arr_2 [i_0] [i_0] = ((!((min((!var_13), (var_1 ^ var_3))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_13;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_4] [i_2] [i_1] = (max((min(-120, -1387540484282571414)), ((max(0, 32767)))));

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_16 = ((var_5 ^ (min((min(var_5, var_2)), var_0))));
                            var_17 = (min(var_17, ((max((var_2 >= var_3), (max((min(var_1, var_3)), ((max(var_13, var_11))))))))));
                            var_18 = (~-252100462);
                            var_19 ^= max(((max((var_2 ^ var_4), (~var_10)))), (min((max(var_3, var_12)), (~var_8))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = ((~((min(var_8, var_12)))));
                            var_21 = (max(((-(max(var_3, var_3)))), ((min(var_10, var_8)))));
                            var_22 = ((+(max((var_4 / var_1), var_8))));
                            var_23 = (min((max(var_13, (min(var_4, var_2)))), ((min((var_9 > var_8), (min(var_9, var_2)))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_26 [i_7] [i_4] [i_1] [i_2] [1] = (min(var_12, (max(var_11, -var_2))));
                            arr_27 [i_1] [i_4] [i_3] [i_1 + 2] [i_1] = (min((min(var_5, ((min(var_9, var_8))))), var_5));
                            arr_28 [i_7] [i_1] [i_4 + 3] [i_1] [i_1] [i_1] [i_1] = (min(((((max(var_9, var_3)) > var_4))), (var_9 - var_11)));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_33 [i_8] [i_8] = (max((min((!var_3), -1)), (max((~var_4), var_13))));
        var_24 = (max(((max((!var_11), (~var_2)))), (min((min(1122755047, 23414)), 23397))));
    }
    var_25 = (max(((~((max(var_9, var_7))))), (min((var_6 >= var_7), -var_11))));
    var_26 = ((!(((-(max((-2147483647 - 1), -118)))))));
    #pragma endscop
}
