/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_11 = (max((arr_2 [i_0]), (arr_1 [i_2])));
                        var_12 = (max(66, (((var_1 ? var_0 : (arr_2 [i_0]))))));
                        var_13 = (((((11 ? 190 : ((-1499 ? 3435356221 : -1))))) ? 69 : (arr_0 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (arr_10 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_4]);
                        arr_11 [i_0] [i_1 - 3] [i_1 - 3] [i_0] = 1;
                        var_15 = var_10;
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1 + 1] [i_0] [i_0] [i_0] [i_0] = ((((!(arr_3 [i_0]))) || ((((arr_9 [i_5] [i_5 - 1] [i_2 + 1] [i_1 - 2]) ^ (arr_5 [i_0 + 3] [i_2 + 2] [i_2 + 2]))))));
                        var_16 = var_5;
                        var_17 = ((66 <= 1) <= ((((arr_7 [i_1 - 3] [i_2 + 3] [i_5] [i_0]) != (arr_7 [i_1 - 2] [i_5] [i_5] [i_0])))));
                        var_18 = ((~((-(((var_9 || (arr_4 [i_0] [i_1]))))))));
                    }
                    var_19 = ((((arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [1] [i_1 - 2] [i_1 - 2]) | (arr_12 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 2]))) / ((max((arr_10 [i_1] [i_1] [i_1 + 1] [i_2 - 1]), var_5))));
                    arr_16 [i_1] [i_1] [i_1] [i_0] = 1;
                    var_20 = (-((((arr_10 [i_0 - 3] [i_1 + 1] [i_2 + 1] [i_2 + 3]) == (arr_10 [i_0 - 3] [i_1 - 1] [i_2 - 1] [i_2 + 2])))));
                }
            }
        }
    }
    var_21 = (((((var_2 > ((19169 ? 87 : 3849455870))))) - 66));
    var_22 = ((var_1 ? var_3 : ((~(var_2 | 1231950726)))));
    #pragma endscop
}
