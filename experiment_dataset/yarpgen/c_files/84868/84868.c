/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 += (((65532 ? ((-384456184 ? var_2 : 332941595742354744) : (arr_2 [i_0])))));
                var_18 = var_13;
                arr_6 [i_0] = (min((((~(!var_11)))), ((var_16 ? (min((arr_5 [i_0] [i_0] [i_0]), var_2)) : 24))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 += ((62226 ? 0 : var_4));
                    var_20 = 11670609053390393018;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_21 = (((((arr_10 [i_3]) ? -var_14 : var_11))));
                    var_22 *= var_4;
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_15 [6] [i_0] [i_4] &= ((~((var_2 ? (arr_13 [i_0] [i_0] [i_0]) : (arr_9 [i_4] [i_0] [i_4])))));
                    var_23 = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_24 *= (min((((var_11 ? ((var_9 ? 0 : (arr_9 [1] [i_0] [i_5]))) : ((min(0, -1)))))), var_3));
                                var_25 = (((min(var_12, var_12))));
                                var_26 = ((((((!var_8) ? ((17073228338899172415 ? 18113802477967196857 : var_10)) : ((max((arr_12 [i_0] [i_1] [i_0]), var_0)))))) ? (((arr_10 [i_4]) ? 332941595742354744 : (!var_13))) : var_6));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_27 = 1067699620;
                        var_28 = (((max(((!(arr_5 [8] [i_1] [5]))), (var_12 && 200))) ? (!var_5) : (arr_3 [5])));

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            var_29 = (max(var_29, ((min((((var_11 ? 22 : ((min(var_11, var_9)))))), (((arr_1 [i_0] [i_0]) ? 66 : ((var_14 ? var_4 : 27)))))))));
                            var_30 = var_10;
                            var_31 = (22406 / 12704571439386226948);
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_32 += (min((max(((var_13 ? 332941595742354754 : (arr_10 [i_9]))), -1274431252)), (!var_11)));
                            var_33 = 1;
                            var_34 = (!9791056660254058748);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_35 = var_1;
                            arr_35 [i_0] [i_0] [i_4] [i_4] [i_4] [i_10] [i_10] = (arr_19 [i_4] [1] [i_4]);
                            arr_36 [i_0] [i_0] [i_1] [9] [i_4] [i_0] [i_4] = -5612408309036784832;
                            var_36 = (max(var_36, (((~(min((min((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), -1726663930)), ((var_0 ? var_0 : 235)))))))));
                        }
                        arr_37 [i_4] = min((arr_16 [i_7] [5] [i_7] [i_7 - 1]), -var_15);
                    }
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    var_37 = var_16;
                    var_38 = (!13850008740623222878);
                    arr_41 [i_0] [17] [4] = -8;
                }
            }
        }
    }
    var_39 = ((!((min((((var_16 ? var_7 : var_15))), ((var_16 ? 2705170887196069390 : var_5)))))));
    #pragma endscop
}
