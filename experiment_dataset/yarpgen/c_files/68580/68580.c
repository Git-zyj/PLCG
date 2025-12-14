/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (min(var_19, (((var_13 / ((2683207027 ? 6144 : -6128)))))));
    var_20 = (~((var_17 << (var_16 + 7606))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 += (((((29383 ? -29374 : 29381))) ? (-29384 | -29374) : var_10));
        var_22 = (((arr_0 [i_0]) ? -29384 : ((~(~var_17)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_23 = ((arr_3 [i_0]) ? 1736374671 : var_6);
            var_24 = ((~((-(arr_4 [i_1] [i_0])))));
            var_25 = (arr_7 [i_1] [i_0]);

            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                arr_12 [i_0] [i_0] [i_2] [12] = (((arr_9 [i_0] [i_1] [i_2 - 3] [i_2]) <= (arr_9 [i_0] [i_0] [i_0] [i_0])));
                var_26 = (((arr_8 [i_2] [i_2 - 2] [i_2] [i_2]) ? 607712116 : (arr_8 [4] [i_2 - 2] [4] [4])));
                arr_13 [i_0] [i_2] [i_0] [i_2] = ((-((~(arr_3 [i_2 + 2])))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_21 [i_2] [i_1] [i_2] = (arr_15 [i_2] [i_0] [i_0] [i_2]);
                            var_27 = 1736374671;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_28 += (!var_2);
                            var_29 = min(((((arr_19 [i_0] [i_0] [i_1] [i_2] [14] [i_2]) < (arr_24 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_6])))), -var_11);
                        }
                    }
                }
            }
        }
        var_30 = (max(var_30, var_5));
        var_31 = (max(var_31, ((((~17487) && -29411)))));
    }
    var_32 = (min(((var_10 ? (2185902090 + var_9) : var_9)), ((max(var_7, (!var_8))))));
    #pragma endscop
}
