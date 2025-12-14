/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -32117));
    var_18 = ((var_10 ? 32116 : (((((var_4 ? -124 : 123))) ? var_8 : var_0))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = ((-(104 != 9340334308077570897)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [7] [i_2] [i_2] = ((-(min(59938, ((9340334308077570897 ? var_6 : 4278136837464635852))))));
                        var_20 = 15878330545480179002;
                        arr_10 [i_0] [i_2] [i_2 - 1] [i_3] = ((((((var_4 ? 1 : var_11))) ? var_16 : 124)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        var_21 |= ((((((var_7 + 469762048) - var_10))) ? (var_15 / -4059683554) : (max(190, 2568413528229372583))));
                        var_22 = (max(var_22, var_12));
                        var_23 = 4882594947146794686;
                    }
                }
            }
        }
    }
    #pragma endscop
}
