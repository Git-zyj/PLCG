/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2 - 2] [i_1] [i_0 - 1] = ((((((arr_2 [i_0] [i_0]) && (arr_4 [i_0] [i_1])))) << (var_15 - 42406)));
                                var_21 = (min(var_21, ((((arr_8 [i_0] [i_1] [i_2 + 1] [i_4 - 3]) ? (arr_8 [i_4 - 1] [i_1] [i_1] [i_0 + 1]) : (arr_8 [i_4 + 1] [i_3] [i_1] [i_0 + 1]))))));
                                var_22 = (min(var_22, (arr_7 [i_0 + 2] [i_1] [i_0 + 2])));
                            }
                        }
                    }
                    var_23 = arr_3 [i_0 - 1] [i_0 + 1] [i_0];
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0 + 2] [i_1] [i_0 + 2] = ((((((arr_8 [i_5] [i_5] [i_1] [2]) / (arr_8 [i_5] [i_0 - 1] [i_0 - 1] [i_0])))) || ((min((arr_8 [i_5] [i_1] [i_0 + 2] [i_0 + 2]), (arr_8 [i_5] [i_1] [i_1] [i_0]))))));
                    var_24 = (min(var_24, (arr_1 [i_0 + 1])));
                    var_25 = ((+(max((arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [5] = ((((min((arr_4 [i_0 + 2] [i_0 + 1]), (max((arr_11 [i_1] [i_1] [i_0 - 1] [i_0]), var_3))))) ? (arr_19 [i_0] [15] [i_6]) : (arr_8 [i_6] [2] [i_1] [i_0 + 1])));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_26 = var_2;
                        var_27 = 14717;
                        var_28 = 145;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_29 = ((((((!1) * (((!(arr_31 [i_8] [i_6] [i_1] [i_0]))))))) ? (((~(((arr_15 [i_0] [i_8] [i_8] [i_6] [i_0] [i_1] [i_0]) ? (arr_12 [i_8] [i_6] [i_1]) : 1))))) : (((arr_2 [i_6] [i_1]) ? 1 : ((var_8 ? var_9 : (arr_27 [i_8] [i_6] [i_1] [i_0 - 1])))))));
                        var_30 = (max(var_19, ((((-(arr_14 [i_1] [i_6] [i_6] [i_1] [15]))) / var_8))));
                    }
                }
                arr_32 [i_1] [i_1] = arr_19 [i_0] [i_1] [i_0 + 2];
            }
        }
    }
    #pragma endscop
}
