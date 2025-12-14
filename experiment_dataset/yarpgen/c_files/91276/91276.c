/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_19 = ((~(arr_0 [i_0 - 3])));
        arr_2 [i_0] [i_0] = (arr_1 [i_0 - 1]);

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_20 = (min(var_20, var_16));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_1 + 2] [i_2 + 1] [i_3 - 1] = arr_1 [i_0];

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_21 = (arr_5 [i_4]);
                            var_22 = ((65535 < (var_9 < 137)));
                            var_23 = (arr_11 [i_4] [i_2 - 1] [i_1] [i_0]);
                            arr_17 [i_0] [i_1 - 1] [i_0] [i_3 + 1] [i_0] = 960;
                        }
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            var_24 = (((arr_11 [i_0] [i_0] [i_2] [i_3 + 1]) << (var_3 - 4075890706)));
                            arr_22 [i_5 - 1] [i_5 - 1] [i_2 - 2] [i_2 - 2] [i_1] = 12147;
                            arr_23 [i_1 - 1] [i_1 - 1] = (((arr_10 [i_0 + 1] [i_1] [i_2 - 2]) ? 224 : (((arr_18 [i_3] [i_2] [i_0] [i_0]) | (arr_20 [i_0 - 3] [i_1])))));
                            var_25 &= (((-2147483647 - 1) < (arr_1 [i_0 + 1])));
                        }
                        arr_24 [i_0 - 2] [i_1] [i_2] [i_3] = (arr_6 [i_3] [i_0]);
                    }
                }
            }
            var_26 = (max(var_26, (((-118 ? (arr_14 [i_1] [i_1 + 2]) : (~var_8))))));
        }
        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (((~(arr_18 [i_0 - 1] [19] [i_6 + 2] [10]))))));
            var_28 = (10217690307972175404 || 11859127529339964258);
            var_29 = ((~(arr_7 [i_0 + 1] [i_0 - 3] [i_0 + 1])));
        }
    }
    var_30 = min(var_7, (~-17870283321406128128));
    #pragma endscop
}
