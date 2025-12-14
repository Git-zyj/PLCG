/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1;
                var_15 = (max(var_15, ((max(((((min(2132478149, (arr_2 [i_0] [i_1])))) ? 110 : (((!(arr_3 [i_0])))))), var_8)))));
                arr_6 [i_0] [i_1] [i_1] = ((min((arr_3 [i_0]), (arr_3 [i_1]))));

                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    var_16 = (min(var_16, (arr_4 [i_0])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] = ((((((var_0 > (!var_10))))) ^ (arr_1 [i_2 + 3])));
                        var_17 = ((((((arr_4 [i_1]) / 1)))) ? ((((min((arr_1 [i_0]), var_7)) != (((var_5 << (var_4 - 6017922053677940833))))))) : var_11);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_18 = (min(((+(((arr_3 [i_0]) ? var_3 : (arr_3 [i_2]))))), (((var_1 ? (arr_1 [i_0]) : (arr_8 [7] [i_2] [7] [i_2 + 4]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_19 = ((-(arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [4] [i_2] [i_2 + 1])));
                            var_20 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_21 = 32759;
                            var_22 = ((0 / ((((((arr_14 [i_4] [i_4] [i_6] [i_4] [i_6]) ? var_7 : -2132478150))) ? (((255 / (arr_9 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_2])))) : (2132478149 / 4294967295)))));
                            arr_19 [i_0] [i_1] = -var_6;
                        }
                        var_23 = (arr_13 [i_2] [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2]);
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, (((var_10 ? (min(var_0, var_4)) : ((((((255 >> (var_14 - 140)))) ? ((((-2147483647 - 1) != var_3))) : var_1))))))));
    #pragma endscop
}
