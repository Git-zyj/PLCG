/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 | var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 -= (((arr_9 [i_0] [i_1] [13] [i_3]) <= (max((!var_5), var_4))));
                                var_15 += var_11;
                                arr_10 [3] [1] [i_1] [i_2] [i_0] [1] = var_2;
                            }
                        }
                    }
                }
                arr_11 [i_0] = (((max((((!(arr_9 [3] [1] [i_1] [8])))), ((var_0 ? var_7 : var_6)))) <= (arr_3 [i_0 + 3])));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_14 [i_0] [0] [4] [i_1] = ((((var_1 >> (var_7 > var_6))) < (min(var_1, var_2))));
                    var_16 -= (!-var_6);
                    var_17 = ((-(((var_2 <= (((arr_6 [i_0]) ? (arr_5 [i_0]) : var_8)))))));
                }
            }
        }
    }
    var_18 = (min(var_7, -var_12));
    var_19 = ((!((!(((var_12 >> (var_9 + 737195734))))))));
    #pragma endscop
}
