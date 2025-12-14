/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = 32269;
            var_18 = 105;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_1] [i_4] = 112;
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4] = var_14;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_19 = 112;
                            var_20 = (arr_8 [i_0] [i_1] [i_2 + 2] [i_3 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] = (((arr_6 [i_0] [i_1] [i_1] [i_2 + 2] [i_3 - 1] [i_6]) ? -112 : (arr_2 [i_1])));
                            var_21 = (arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1]);
                        }
                        var_22 += ((-(arr_4 [10] [i_2] [10])));
                        var_23 = (arr_3 [i_1] [i_1]);

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_1] [i_7] [i_0] [i_3 + 1] = 222;
                            var_24 = 0;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_25 -= ((~(arr_14 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 2])));
                            var_26 = (((arr_8 [i_3 - 1] [i_1] [i_3 - 3] [i_3 - 3]) ? (arr_8 [i_3 - 2] [i_1] [i_3] [i_3 - 3]) : (arr_8 [i_3 - 2] [i_1] [i_3 - 3] [i_3 + 1])));
                            var_27 = (arr_0 [i_3]);
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_2 [i_1]);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_29 [i_1] = ((-112 ? (~9) : (arr_15 [i_0] [i_1] [i_2 + 1] [i_3 + 1] [i_9])));
                            var_28 = (arr_23 [i_0] [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3]);
                        }
                    }
                }
            }
            var_29 = (min(var_29, (arr_22 [i_1] [i_0] [i_0] [i_0])));
        }
        arr_30 [i_0] [i_0] = (max(((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), var_4));
        var_30 = (max(var_30, 6488059299024815322));
        var_31 = (max(((((arr_7 [10]) ? (~var_9) : 1))), (max(6488059299024815332, (arr_11 [i_0] [i_0] [i_0] [8] [i_0] [i_0])))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_33 [i_10] = var_13;
        var_32 = (max(var_32, ((max((((arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))), (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
    }
    #pragma endscop
}
