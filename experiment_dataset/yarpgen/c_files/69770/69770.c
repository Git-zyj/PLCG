/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 += (((((arr_3 [i_0] [i_0 - 1]) ? (arr_3 [i_0 - 2] [i_0 - 1]) : (arr_0 [i_0]))) * (!var_15)));
                var_22 = (max(var_22, (((~((((arr_2 [12]) < (arr_1 [i_0])))))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_23 = (min(((max((((arr_0 [i_2]) ? var_19 : var_14)), var_7))), (min(var_0, (arr_2 [i_2])))));
                    arr_8 [i_0 - 2] |= var_3;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [1] = 134;
                        var_24 = (max(var_24, (((-((((arr_9 [i_0] [i_1] [i_2] [i_0 - 1] [i_0]) || 10416938226358973551))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_0] [i_0] = ((((min((min(var_14, var_13)), (((!(arr_5 [i_1]))))))) ? 18399671418187401170 : (min((arr_7 [i_0] [i_3] [i_0] [i_0]), 12023205540782199105))));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_25 ^= arr_5 [i_0];
                        arr_15 [i_4] [i_2] [i_1] [i_0] = var_7;
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_26 += (arr_4 [i_0 - 1]);
                        arr_20 [i_0] [i_1] [i_0] [i_5] = (((~(arr_14 [i_0 + 1] [i_5 + 2]))));
                    }
                    arr_21 [i_0] [6] = ((!((!(arr_13 [i_0] [1] [i_2] [i_2] [i_0 - 2])))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_27 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_28 = ((~(arr_10 [i_6] [i_6] [i_1] [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
