/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] = arr_6 [i_3] [i_2] [i_1 - 1] [13];
                        arr_11 [i_3] [i_1] [21] [i_3] = 15;
                        var_14 = ((((arr_3 [i_0] [i_1]) * (max((arr_0 [4]), (arr_0 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_15 = var_6;
                        var_16 = (arr_6 [1] [14] [18] [14]);
                    }
                    arr_14 [i_2 + 3] [i_0 + 3] [14] [6] &= (((((14336 ? ((((arr_12 [0] [i_1] [i_0 + 2] [0] [0]) ? 2517 : (arr_3 [10] [10])))) : (max((arr_0 [i_2]), 1))))) ? ((~(arr_4 [18] [18]))) : (((max((arr_3 [i_0 + 1] [1]), (arr_3 [i_0 - 1] [8])))))));
                    arr_15 [i_1] = min((((arr_0 [i_0]) ? (min(134217727, 65535)) : (60420 * var_3))), ((max((min((arr_3 [i_0] [i_1]), var_2)), ((min(65535, (arr_3 [i_0] [i_1]))))))));
                }
            }
        }
    }
    var_17 = 41810;
    var_18 = (min(var_18, 786090916));
    #pragma endscop
}
