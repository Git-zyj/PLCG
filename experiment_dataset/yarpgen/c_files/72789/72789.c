/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min((((-(var_4 >= var_8)))), ((((max(var_8, var_7))) ? ((var_1 ? var_7 : var_0)) : ((max(var_3, var_4)))))));
    var_11 = ((((-(var_0 - var_0))) % (((var_1 >= (var_3 && 1023))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_12 = var_3;
                        arr_12 [i_0 + 2] [9] [i_1] [7] [2] = (((((arr_1 [i_2 + 1]) ? var_0 : (arr_2 [i_1]))) >> ((((var_1 | (arr_1 [i_0 - 2]))) - 18446744072518238187))));
                        var_13 = ((-((((arr_9 [i_3 + 2] [3] [i_0 - 1]) < (arr_10 [i_3 + 2] [1] [i_0 - 1] [i_2 - 1]))))));
                        var_14 |= ((((((((~(arr_2 [i_0])))) ? (arr_4 [i_0] [1]) : (arr_1 [i_0 - 1])))) ? ((((max(var_0, var_0))) % (arr_7 [i_0] [i_1] [8] [5]))) : (((((1029 > (arr_5 [2] [0]))) && (((743918150 ? -1663738047 : -2))))))));
                    }
                }
            }
        }
        arr_13 [i_0] = 10472055674704857493;
    }
    #pragma endscop
}
