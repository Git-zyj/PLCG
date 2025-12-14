/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = 1;
    var_13 = 274877906943;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 -= 18446744073709551615;
                    var_15 -= var_1;
                    var_16 ^= var_4;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_3] = var_3;
                        var_17 = (max(var_17, 274877906943));
                        arr_12 [i_1] [i_3] [i_1] [i_1] = (arr_7 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (arr_14 [i_0] [i_2] [19] [13])));
                        arr_16 [i_0] [i_1] [i_2] [10] &= (arr_2 [1]);
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_19 -= -728407769255375603;
                            var_20 -= var_4;
                            var_21 -= var_1;
                            var_22 = (arr_9 [i_0] [i_1] [i_2] [i_5] [i_5]);
                            arr_23 [i_5] = (arr_0 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_26 [i_0] [i_2] [i_5] [i_5] = 274877906943;
                            var_23 = 7978083185540387914;
                            var_24 = var_10;
                        }
                        var_25 ^= -89;
                    }
                }
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
