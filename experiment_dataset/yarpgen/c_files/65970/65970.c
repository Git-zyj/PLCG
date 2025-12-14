/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_3;
    var_16 = (min(var_16, var_9));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_17 = (max((min(var_4, var_8)), ((min(var_12, var_13)))));
                arr_10 [i_0] [i_0] [i_0] = (max(((min(var_10, var_11))), (max(var_12, var_4))));
            }
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_13 [4] [i_1] [i_0] [i_0] = (min((max(var_7, var_8)), (max(var_0, var_3))));
                var_18 = (min(var_4, (min((min(var_7, var_10)), var_4))));
                var_19 = (min(var_19, ((max((max((max(var_7, var_3)), ((max(var_13, var_4))))), var_9)))));
                var_20 = (min(((min(var_8, var_10))), (max(var_12, var_0))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_21 ^= var_4;
                        var_22 &= var_6;
                        var_23 = (min(((min(var_10, var_9))), (min(var_9, (max(var_3, var_11))))));
                    }
                    var_24 ^= var_13;
                    arr_19 [i_0] [i_1] [i_0] = min(var_1, (max(var_2, var_12)));
                    var_25 = (max(var_25, ((max(((max(var_13, var_8))), (max(var_4, var_0)))))));

                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min(var_11, var_5)), ((min(var_5, var_1)))));
                        arr_23 [i_0] [i_0] [i_3] [i_4] [i_0] = (min((max(var_5, var_0)), var_0));
                        var_26 = var_0;
                        var_27 = var_1;
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        var_28 = (max((min(var_1, var_10)), ((min(var_5, var_12)))));
                        var_29 = var_3;
                        var_30 = (max(var_3, (max(18446744073709551612, 0))));
                        arr_27 [i_4] [i_0] [i_4] [i_0] [i_7] = (min(var_3, ((min(var_13, var_8)))));
                        arr_28 [i_0] [i_0] [i_3] [i_0] [i_7 + 4] [i_0] [i_0] = (max(((max(var_10, var_2))), (max(4294967295, -12190))));
                    }
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = (max(((min(var_5, var_2))), (max(var_0, var_7))));
                    var_31 += var_7;
                    var_32 *= var_8;
                    var_33 = (max((min(var_0, var_4)), ((min(var_9, var_13)))));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_36 [14] [14] [i_3 - 1] [i_8] [i_1] &= (min((max(var_7, var_7)), var_11));
                        arr_37 [i_0] [i_0] [i_3] [i_0] [i_0] = (max(var_11, (min(18446744073709551615, 0))));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_42 [i_0] [i_3] [i_8] = var_13;
                        var_34 = (max(var_34, var_4));
                        var_35 = min(var_8, var_7);
                    }
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_36 = var_9;
                        arr_45 [i_8] [i_0] [i_0] [i_0] = (max(var_6, (min(var_13, var_9))));
                        var_37 ^= (max((min(((min(var_13, var_13))), (min(var_2, var_3)))), (max(var_3, var_11))));
                        var_38 = (min(var_38, ((max(((min(var_8, var_6))), (min(var_3, var_1)))))));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_39 ^= (max((max(var_6, var_4)), var_12));
                var_40 = max(((max(var_4, var_11))), var_7);
            }
            var_41 = var_11;
            arr_49 [i_0] = (min(var_5, var_9));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_42 = (min(((min(var_6, var_13))), var_9));
            var_43 = (min(((max(var_13, var_10))), (max(var_7, var_13))));
        }
        var_44 = (max((max(var_0, var_12)), var_2));
    }
    var_45 = var_6;
    #pragma endscop
}
