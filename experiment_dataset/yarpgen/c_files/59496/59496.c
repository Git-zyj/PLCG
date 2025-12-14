/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((((((((arr_2 [i_0]) ? var_11 : -1486333797))) ? (arr_1 [i_0] [i_1]) : ((10379756591867597078 ? (arr_3 [i_0] [i_0] [17]) : 255))))) ? ((((arr_4 [i_0] [i_0] [i_1]) ? (arr_1 [i_0] [3]) : (arr_0 [i_0])))) : (max((((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : 13048)), ((max(var_0, 20605)))))));
                arr_5 [i_0] [i_1] [i_0] = (15928 == 119);
                var_21 = ((~(((var_6 || ((min((arr_4 [5] [5] [i_1]), -4))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_17 [13] [i_3] [i_3] = ((max((arr_8 [i_2 - 2]), ((586792754 ? 32256 : (arr_13 [i_2]))))));
                            arr_18 [i_2 - 1] [i_3] = ((~(((arr_2 [i_2 + 1]) ? var_1 : (!9223372036854775807)))));
                        }
                    }
                }
                var_22 += (arr_2 [i_2 + 1]);
            }
        }
    }
    var_23 = (32256 / -1486333797);
    #pragma endscop
}
