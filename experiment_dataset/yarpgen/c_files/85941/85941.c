/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((!(-2147483647 - 1)))) - ((var_8 ? var_17 : var_16))))) ? ((((var_12 && var_5) > var_17))) : (((var_7 >= var_12) ? ((var_3 ? 167 : 31)) : ((35 ? var_8 : 15964)))));
    var_20 = ((!(((32767 && -27282) || (!var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (((((~0) ? (((~(arr_2 [i_0])))) : (((arr_4 [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : (arr_6 [11]))))) & ((min((0 & 4305), (((arr_0 [i_1]) ? 31410 : (arr_8 [i_2] [i_2]))))))));
                    var_22 = ((-((-((var_11 ? 1304567720634762995 : -3056891921804035867))))));
                }
            }
        }
    }
    #pragma endscop
}
