/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 -= 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 -= var_10;
                        arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = var_0;
                        var_13 = (((((var_6 ^ var_1) || (arr_4 [i_1] [i_2] [i_2]))) ? (max((arr_2 [i_0]), 9223372036854775803)) : 9223372036854775793));
                        arr_15 [i_0] [i_0] [13] [5] [i_3] [i_0] = var_2;
                    }
                    var_14 = (max(var_14, (arr_3 [i_2])));
                    arr_16 [1] = (min((arr_12 [i_2]), ((-9223372036854775786 ? var_4 : (arr_1 [i_0])))));
                }
            }
        }
        arr_17 [i_0] = ((-((+(((arr_6 [16] [i_0] [i_0]) | var_5))))));
        arr_18 [i_0] = (((((-(arr_9 [i_0] [i_0])))) ? ((min((var_1 <= 24), (((arr_2 [i_0]) >= var_4))))) : (arr_9 [i_0] [5])));
    }
    var_15 = (max(5, 9223372036854775785));
    #pragma endscop
}
