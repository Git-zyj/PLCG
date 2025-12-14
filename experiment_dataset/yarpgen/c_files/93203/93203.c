/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((((var_7 == var_8) != var_3))) >> var_14);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 16;i_4 += 1)
                            {
                                var_19 -= var_16;
                                var_20 = var_17;
                                var_21 = 54;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_22 = (min(var_22, (var_5 == var_8)));
                                var_23 = (var_2 & var_12);
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                var_24 = (var_17 & (var_15 & var_5));
                                var_25 = (max(var_25, var_16));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [3] = var_2;
                                var_26 = ((((var_1 != var_6) <= (var_12 & var_12))));
                            }
                            var_27 = (max(var_27, ((((!var_9) ^ ((((var_14 ^ var_13) > (!var_3)))))))));
                            var_28 = ((!(!var_17)));
                        }
                    }
                }
                var_29 = (!1541789012);
            }
        }
    }
    var_30 = ((-((var_14 ? var_6 : -var_16))));
    #pragma endscop
}
