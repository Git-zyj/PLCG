/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, var_19));
    var_21 = ((!(((max(var_17, 3185243608))))));
    var_22 = ((var_10 == (((max(50, (-35 == var_0)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_23 = max((min(((((arr_1 [i_0] [i_1]) && (arr_4 [i_0] [6] [6])))), (arr_0 [i_1]))), 62);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_24 = var_2;
                            arr_13 [i_2] [i_0] [9] [9] [9] [i_2] [i_2] = ((26799 == (((arr_11 [i_2] [12] [i_4] [i_2] [i_4 - 1] [9] [4]) >> (((arr_0 [i_4 + 1]) + 1705463998))))));
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((1720 ? (max((arr_6 [i_0] [i_0] [i_0]), (-26799 + var_4))) : ((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
    }
    var_25 = ((var_3 >= (!18446744073709551615)));
    #pragma endscop
}
