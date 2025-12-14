/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (min(((min((!252), (max(var_5, var_8))))), (((var_14 ? var_3 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((!var_9) + (max(-var_13, ((min(221, -3074)))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_19 = 30;
                    var_20 = ((var_8 ? var_3 : var_10));
                    var_21 ^= var_10;
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_22 = var_9;
                        var_23 = (((arr_11 [10] [i_0 - 3] [i_3] [i_3 + 1]) ? (arr_11 [i_0 - 2] [i_0 - 2] [2] [i_3 - 1]) : (arr_11 [i_0] [i_0 + 2] [i_1] [i_3 + 1])));
                        var_24 = var_12;
                    }
                    var_25 = (min((((var_9 ? (!var_3) : (max(var_0, var_5))))), (max((max((arr_11 [i_0] [i_0] [i_3] [i_1]), var_9)), (var_7 | var_10)))));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_26 = ((~(6367617865638578105 >= 222)));
                        var_27 = ((+((max((arr_15 [i_0]), (max((arr_0 [i_0]), var_12)))))));
                    }
                    var_28 = (min((arr_11 [i_1] [i_1] [i_1] [i_1]), ((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : (arr_14 [i_3 - 1] [i_0 + 3]))))));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_29 = ((-(((!(((var_9 ? var_10 : var_13))))))));
                    arr_19 [i_0 - 2] [i_0 - 2] = ((var_1 ? ((max(var_11, var_7))) : ((((max((arr_16 [i_0] [15] [i_0] [i_0 + 1]), var_12))) / var_0))));
                    var_30 = ((((max(var_10, var_0))) ? (((((arr_5 [i_6] [i_1] [i_0]) & (arr_4 [i_0] [i_1] [i_0]))))) : ((max(var_8, var_1)))));
                }
                var_31 = ((var_3 / (arr_8 [i_0 - 1] [i_0] [i_0 + 3])));
            }
        }
    }
    var_32 = ((var_9 ? (((((var_3 - var_8) && -var_15)))) : ((-(max(var_11, var_7))))));
    #pragma endscop
}
