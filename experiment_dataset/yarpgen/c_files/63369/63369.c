/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((62824 ? 127 : 7));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_3 [20] [i_1] [2]);
                arr_6 [i_0] [i_1] [i_1 - 1] = ((((((arr_1 [i_0]) + 18339))) ? 8 : ((var_12 ? ((1 ? 1 : 1)) : (((arr_0 [i_0]) + 4096))))));
                arr_7 [i_1] [i_1] [i_0] = ((((((((((-104 + 2147483647) >> (var_0 - 28513)))) ? (arr_0 [i_0]) : var_0)) + 2147483647)) << (32 - 32)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = ((-30152 ? (2222 ^ -1492) : 1));
                            var_21 = var_4;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_17 [i_0] [i_1 + 1] [i_1] = (max(var_14, (((((var_2 ? 1 : (arr_16 [6] [i_4] [i_4])))) ? 2103 : 1))));
                    arr_18 [i_1] [i_4] = (((32018 ^ -33) ? 1 : (~1)));
                    var_22 = ((-(-11248 - var_6)));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_24 [21] [21] [i_1] [i_1 + 1] [i_6] = 1;
                        arr_25 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = var_9;
                        var_23 = (arr_0 [i_1 + 1]);

                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1] = (((arr_20 [i_1] [i_1] [i_1 + 1] [i_1]) >= (((arr_11 [i_0] [i_1 + 3]) ? 1 : var_10))));
                            var_24 = -25;
                            var_25 = (~-9563);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_32 [20] [i_1] [i_5] [i_1] [i_8] = ((var_11 ? var_14 : 20909));
                            arr_33 [i_0] [i_1 + 3] [i_1] [i_6] [i_8] = ((0 / (-127 - 1)));
                        }
                    }
                    var_26 = (min((((arr_21 [i_1 + 3] [0] [i_1 + 3] [i_5]) / (arr_21 [i_1 + 2] [i_5] [i_5] [i_1 + 1]))), (5034 * 0)));
                    arr_34 [i_0] [i_1] [i_1 + 1] = (((max((~36), (arr_19 [i_0] [i_0] [i_1 + 2] [i_5]))) != ((max((max(38753, var_8)), var_14)))));
                }
            }
        }
    }
    var_27 = ((min(var_10, ((var_1 ? 503296541 : 62)))));
    #pragma endscop
}
