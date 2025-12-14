/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((min(var_5, (var_16 ^ var_16))), ((var_17 + ((157 ? 44011 : 167)))));
    var_19 &= ((var_2 ? ((var_4 ? 0 : -2432210)) : (var_3 & var_17)));
    var_20 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = min((((var_12 < 44011) % var_2)), ((var_1 ? 48 : var_9)));
                                var_22 = (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_3]);
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_23 = ((!((((var_13 + 2147483647) << (var_12 - 50240))))));
                    var_24 = var_6;
                    var_25 = ((11 ? 244 : 43821));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_26 -= (((var_11 ^ -628574405) ? -2432231 : var_0));
                        var_27 -= -1691332030;

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_28 = (((((28368 ? -2432228 : 57))) ? (arr_11 [i_1] [i_1] [i_1] [i_6 + 2]) : ((-1714368885 ? 211 : 229))));
                            arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] [i_8] = (15416 + 1691332047);
                        }
                    }
                    var_29 = (26378 / 48);
                    var_30 = var_10;
                }
                for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_31 = var_1;
                                var_32 = (var_6 ^ (~var_1));
                                var_33 -= (max((arr_30 [8] [i_9 + 2] [i_10] [i_10]), (var_8 * var_10)));
                                arr_37 [i_9] [i_0] [i_11] [i_0] [i_10] [i_9 + 2] [i_0] = max(189, -660924767);
                            }
                        }
                    }
                    var_34 = ((var_0 ? ((215 ? 52760 : 65533)) : ((((min(-2045948658, -336068054))) ? 0 : 207))));
                    var_35 = (((max(-1258868258, 336068073)) | var_9));
                    var_36 = (arr_23 [i_0] [i_0] [i_9] [i_0] [i_0] [i_1]);
                }
                var_37 = (((((-336068054 ? 35875 : -498042728))) ? ((var_13 ? (arr_9 [i_0] [i_1] [i_1] [i_0]) : var_6)) : ((max(var_7, (arr_9 [i_1] [i_1] [i_1] [i_0]))))));
                var_38 = var_3;
                var_39 = var_1;
            }
        }
    }
    #pragma endscop
}
