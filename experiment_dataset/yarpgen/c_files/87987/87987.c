/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 *= ((((((((arr_6 [i_1]) ? var_6 : 9589))) && ((max(var_12, var_4))))) ? (!var_8) : var_12));
                    var_14 = (max(var_14, ((min(var_3, (var_6 >= var_11))))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_1] = var_0;
                            var_15 = var_0;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_16 = 8069;
                            var_17 += var_5;
                            var_18 -= (((arr_16 [i_0] [i_1] [i_3 + 1] [4] [i_3 + 1] [i_0 + 1] [i_0 + 1]) ? var_1 : var_6));
                            var_19 = (~var_1);
                        }
                        var_20 = ((~((min(-23294, (arr_13 [i_3 + 2] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))))));
                        arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] [i_2] = (((arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]) ? ((-9589 ? var_8 : (((arr_11 [i_0] [i_0] [i_2] [i_1]) ? var_2 : var_2)))) : ((min(32767, (min((arr_3 [i_0] [i_1]), var_3)))))));
                        arr_19 [i_1] [i_1] = (min(((((min((arr_10 [i_0] [i_0] [i_2] [i_0]), var_2))) != -30543)), ((!(((1 ? -26777 : 15351)))))));
                    }
                    var_21 = (max(var_21, (((~(min(var_2, ((var_10 ? -12524 : var_11)))))))));
                }
            }
        }
        var_22 = (arr_1 [i_0] [i_0]);
    }
    var_23 += ((var_6 <= (((!var_7) >> (var_5 - 23974)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                var_24 = (arr_21 [i_7] [i_7 + 2]);
                var_25 = (min(((min((min(var_9, -8069)), (max(32767, var_5))))), (max(((-(arr_22 [i_7]))), ((max((arr_20 [i_6] [i_6]), var_8)))))));
                arr_24 [i_6] = -31948;
            }
        }
    }
    #pragma endscop
}
