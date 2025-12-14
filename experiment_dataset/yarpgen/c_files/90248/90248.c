/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 -= ((~(arr_1 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_20 = 4086683583;
            arr_4 [i_0] = (!(arr_1 [i_1 - 2] [i_1 + 1]));
            var_21 = ((((arr_2 [i_1]) && (arr_2 [i_1 - 1]))));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_22 -= 396863192;
        var_23 = var_14;
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (arr_1 [i_4] [i_5]);

                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_17 [i_2] [i_6 + 1] [i_4] [i_6 + 1] [i_2] = (((arr_16 [i_2] [13] [9] [i_5] [i_6]) == ((0 ? var_8 : (((var_15 != (arr_7 [i_2] [i_2]))))))));
                            var_25 = ((!((min((arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3]), var_2)))));
                        }
                    }
                }
            }
        }
    }
    var_26 |= (min((min((((var_7 ? var_12 : var_17))), (max(15354824139705959117, 1)))), (((var_6 ? var_5 : var_4)))));
    var_27 = (var_5 && var_7);
    #pragma endscop
}
