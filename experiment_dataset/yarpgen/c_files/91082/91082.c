/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((22123 / var_1) ? (1 * 1) : ((var_0 ? 2279629486 : var_2))))) ? var_11 : (((var_5 | ((0 ? var_0 : 62562))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = ((((arr_6 [i_1 - 2] [i_1 - 1] [i_1]) ? -1 : var_8)));
                            var_17 = ((~((((((var_4 ? (arr_3 [i_0] [i_1 + 2]) : var_4))) && ((((arr_4 [i_0] [15] [i_2]) | var_12))))))));
                            arr_11 [i_0] [i_1 + 2] = ((~(~-22)));
                        }
                    }
                }
                arr_12 [i_1] = ((((arr_0 [i_0] [i_1]) == (arr_4 [i_1] [i_1 + 2] [i_1]))));
            }
        }
    }
    #pragma endscop
}
