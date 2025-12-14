/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max(38291, (min(-3330743690720429112, 1)))))));
                arr_6 [i_1] = (min(((min(21125, 65535))), 18446744073709551593));
                var_12 = 3275917954;

                for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_13 = (max((max(64667, (arr_4 [i_0] [i_2 - 3]))), 21128));
                    var_14 -= (min((arr_8 [i_0 + 3] [i_1] [i_2 - 1] [i_1]), (max((arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0]), (arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_0 + 1])))));
                }
                for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_3 - 1] [i_0] |= 0;
                        arr_15 [i_0] [i_0] [i_0] [i_4] = (max((min((arr_2 [i_0]), 3652689040057075805)), (min((min(3652689040057075805, 463145664)), (arr_1 [i_0])))));
                        var_15 = (max(((min((arr_9 [i_0 - 1] [i_0] [i_0]), (arr_9 [i_0 + 2] [i_0] [i_0])))), (max(17293822569102704640, (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_16 |= 15117;
                        var_17 -= 896;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_18 = (arr_12 [i_0] [i_1] [i_3] [i_6] [i_1] [i_1]);
                                arr_28 [i_7] = (min((arr_21 [i_0] [i_0] [i_3] [i_6] [i_7]), 868));
                            }
                        }
                    }
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_19 = (max((max((arr_19 [i_0] [i_1] [i_8] [3] [i_0 + 1] [i_0]), (arr_19 [18] [18] [i_8] [i_0] [i_0 + 1] [i_1]))), (max((arr_19 [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_8]), (arr_19 [i_1] [i_1] [i_1] [i_1] [i_0 + 1] [i_0 + 3])))));
                    arr_31 [i_0] [i_1] [i_8] = (arr_30 [i_8] [i_1]);
                }
                for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    arr_35 [18] |= 3652689040057075826;
                    var_20 = 2021462578;
                }
            }
        }
    }
    var_21 = (min(var_21, var_7));
    var_22 = (max(var_22, (min(((min(879, 65507))), (max(((max(-17227, var_1))), 2021462583))))));
    #pragma endscop
}
