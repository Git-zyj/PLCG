/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 |= (((var_5 ? -4395436930206299461 : 1)));
                arr_6 [i_0] |= (((((((arr_5 [1] [1]) ? var_2 : -59)) | var_5)) <= -59));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (~((8160 ? 525012271430959691 : 918331291936254112)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [6] [i_0] [i_3] [i_1] = (1724705032 % 2147483647);
                                var_14 -= (-6 / -8);
                                arr_19 [i_0] [i_0] [i_3] [i_4] |= (arr_1 [i_0]);
                                var_15 = (arr_4 [i_0] [i_0] [i_2 - 2]);
                            }
                        }
                    }
                    var_16 -= (1 % 59);
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_17 = (max(var_17, ((((((arr_20 [i_0] [8] [i_5] [i_5]) ? var_3 : (arr_4 [i_0] [i_0] [i_0]))))))));
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (max(1, 65535));
                }
                var_18 += 0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_19 += ((var_5 + (var_11 ^ 80415596)));
                            var_20 = (max(var_20, (1269153776 % 1071781353)));
                            var_21 = (max(var_21, (-3 / -4395436930206299461)));
                            arr_30 [i_0] [i_0] [i_6] [i_6] [i_7] [i_0] |= (((-(((-121 + 2147483647) << (var_8 - 7345837019537528995))))));
                        }
                    }
                }
            }
        }
    }
    var_22 |= (max(((((min(-8161, 672143653))) ? (~var_12) : var_0)), var_12));
    #pragma endscop
}
