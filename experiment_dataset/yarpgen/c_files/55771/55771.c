/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 938791122;
    var_20 = ((-(!6389731375165972149)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (!6389731375165972144);
                                arr_12 [i_0] [i_1] [1] [i_0] [2] [i_0] [i_0] = 89;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = 129;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = -2052835004;
                    var_22 = (--6389731375165972149);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] = -5749;

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (!-546383338);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_24 *= 50;
                            var_25 = (--5968647125768439623);
                            arr_24 [i_0] [i_1] [i_1] [2] = 6389731375165972136;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_26 = 89;
                            arr_28 [i_0 - 1] [i_0] [i_0] [i_0] = (!90);
                            arr_29 [i_0] [i_1] [i_5] [i_0] = -20480;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_27 = -90;
                            var_28 = (min(var_28, 232));
                            var_29 = 0;
                            arr_33 [i_0] [i_1] [i_5] [i_0] [i_9] = 3664160897;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, 232));
                            var_31 = 87611690;
                        }
                        var_32 = (!-3748583936);
                        var_33 *= (!2683724633);
                        var_34 = (min(var_34, -2285));
                    }

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_35 = (!2634959949);

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_36 = (!-65);
                            var_37 = 3748583958;
                            arr_40 [11] [i_1] [i_5] [i_11] [i_12] [i_0] = -546383338;
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_38 = (~-10);
                            arr_43 [i_0] [i_1] [i_5] [i_0] [i_13] [i_5] = (!39);
                        }
                        arr_44 [i_0 + 1] [0] [i_5] [i_0] [i_0 - 1] = (+-0);
                    }
                }
                var_39 = -90;
            }
        }
    }
    #pragma endscop
}
