/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((~var_7) < var_9)) ? var_7 : (var_3 < var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (arr_5 [i_0] [i_1] [1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = (((~4362862139015168) ? ((min((arr_14 [i_4 - 2]), (arr_4 [i_4 - 4] [i_4 - 4])))) : ((~(arr_14 [i_4 - 1])))));
                                var_13 = (min(var_13, (((max(((max(var_3, var_8))), (arr_2 [i_3] [7])))))));
                                arr_16 [i_0] = ((!(((max((arr_14 [i_0]), -8482511114972458908))))));
                                var_14 = ((+((min((arr_12 [i_2] [i_4 + 1] [i_4 - 3] [i_4 - 4] [i_4 + 1] [i_4]), var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, ((((max(var_10, (var_9 >= var_2)))) ? (((var_8 ? var_5 : var_5))) : ((((((853253709 ? var_2 : var_2)) >= var_4))))))));
    var_16 = ((var_2 >= var_7) - (max((!var_2), 853253709)));
    #pragma endscop
}
