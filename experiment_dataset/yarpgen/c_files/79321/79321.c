/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 += ((62914560 ? (~0) : 33868));
    var_15 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = var_6;
                            var_17 = (((((((3 ? (arr_6 [i_0] [i_2] [i_3]) : (arr_0 [i_0] [i_0 - 1])))) == (arr_2 [i_2] [i_1]))) ? ((var_1 - ((var_11 ? (arr_0 [i_0] [i_0 - 1]) : (arr_7 [i_0] [i_0 - 1]))))) : (max(((~(arr_1 [i_0] [1]))), var_7))));
                        }
                    }
                }
                var_18 ^= ((((!(arr_7 [i_0 - 1] [i_1 + 1]))) && ((((arr_0 [i_1 + 1] [i_0 - 1]) ? (arr_7 [i_0 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_0 - 1]))))));
                var_19 = (min(var_19, (((((min(var_10, var_10))) ? (((arr_7 [i_0] [i_0 - 1]) - (arr_7 [i_0 - 1] [i_1]))) : (~var_7))))));
                var_20 += (max(-12176, ((33868 << (372755039082044194 - 372755039082044186)))));
            }
        }
    }
    #pragma endscop
}
