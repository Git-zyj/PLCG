/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_5 ? var_8 : var_8))), (!var_0)));
    var_14 = ((var_2 ? (~var_0) : (~var_7)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 1] [i_0 - 2]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_16 = ((~(arr_4 [i_0 - 3])));
            var_17 = (var_6 << var_4);
            arr_5 [i_0] [1] [i_0] = (arr_1 [i_0] [i_1]);
            var_18 = (((arr_2 [i_0 - 3]) / var_4));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_7 [i_2] [i_0 + 1] [i_2 + 1])));
            var_20 ^= ((((max((var_8 == var_3), (arr_4 [i_0 + 1])))) ? (min(-var_2, (var_6 % var_2))) : (min((min((arr_1 [14] [i_2 + 2]), var_7)), (((-(arr_1 [i_0 + 1] [i_2 + 1]))))))));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((+((max((var_1 && var_2), (arr_1 [0] [i_3])))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 = ((!(arr_16 [14] [i_3 - 1] [i_0 - 3] [i_5] [i_0 - 3])));
                            var_23 = (var_1 >= var_10);
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_5 ^ ((min(var_9, var_8)))));
    #pragma endscop
}
