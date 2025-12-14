/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = var_9;
                    var_13 = ((+((var_4 ? (((arr_1 [i_0] [1]) + (arr_0 [i_0]))) : (arr_2 [12] [i_0])))));
                    var_14 -= min(1, 7632924416487587588);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_15 = 576460717943685120;
                    var_16 = -2777297623400154259;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 ^= arr_16 [i_0] [i_0] [i_0] [i_0] [10];
                                var_18 |= ((((58797 * (~var_10))) + ((((arr_10 [i_6] [i_4] [4]) >> (var_3 - 49271))))));
                                var_19 = ((250 ? 0 : -10));
                            }
                        }
                    }
                    var_20 = var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_21 = (min(var_21, (arr_17 [i_7] [4])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_22 = (arr_17 [0] [i_8]);
                    var_23 = ((4294967295 ? (arr_22 [i_9]) : 12689));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, 4271276759));
                        var_25 = (1 + 1);
                        var_26 = (max(var_26, ((((arr_26 [i_7] [13] [i_10]) ? (arr_21 [i_7]) : ((var_6 ? var_3 : var_7)))))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_27 = ((1 ? (arr_25 [i_12] [i_9] [2] [i_12]) : (arr_25 [i_12] [i_12] [i_9] [i_12])));
                            var_28 = (arr_24 [i_7]);
                        }
                        var_29 = 3517491239940409576;
                        var_30 &= (~(arr_20 [i_9]));
                        var_31 = 10813819657221964028;
                    }
                    var_32 = (min(var_32, ((((arr_23 [i_7] [i_8] [i_9]) ? (((arr_22 [12]) + var_2)) : (arr_28 [i_9] [i_8] [i_9] [i_9] [7]))))));
                    var_33 = var_9;
                }
            }
        }
    }
    var_34 = (max(var_34, (((var_4 ? ((min(var_5, -26))) : 4263284096152491612)))));
    var_35 = (max(var_35, (27 - -2544497432770682352)));
    #pragma endscop
}
