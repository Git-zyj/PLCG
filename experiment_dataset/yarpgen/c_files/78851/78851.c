/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_1 [2]);
        arr_2 [i_0] [i_0] = (arr_0 [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_19 = (max(var_19, (((max(-35, (arr_10 [i_4 - 2] [i_1 + 1])))))));
                            var_20 = (!(((var_1 / (arr_3 [i_0 - 1])))));
                            arr_14 [i_0] [19] [i_2] [i_3] [1] = ((~((((0 << (39728 - 39726)))))));
                            var_21 = (var_3 | 1565147463);
                        }
                        var_22 = (min(var_22, ((+((((arr_6 [i_0 + 1] [i_1] [i_2] [11]) ? (arr_7 [i_0] [20] [20] [i_3 + 1]) : (arr_13 [i_1 - 1] [i_1 - 1] [i_2] [5]))))))));
                        var_23 = (max((arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_3 - 1]), (arr_4 [i_0 + 1])));
                    }
                }
            }
        }
        arr_15 [18] = ((((!(arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) ? (min((arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) : ((~(arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
    }
    var_24 = (max(var_5, -var_13));
    var_25 = ((var_16 && ((min(var_2, var_3)))));
    #pragma endscop
}
