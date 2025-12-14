/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((~((var_4 ? var_2 : var_9)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] [i_1] |= (arr_2 [i_0 + 1] [i_0 + 2]);
                var_11 = ((((max((arr_4 [i_0]), ((var_1 ? var_9 : (arr_1 [i_0] [i_1])))))) ? ((((((arr_3 [i_0 + 2] [i_0] [i_1 - 3]) ? var_9 : (arr_1 [i_0] [i_0 + 1])))) ? var_5 : (arr_4 [i_0 - 1]))) : (((arr_1 [i_0] [i_0 + 2]) ? (arr_4 [i_0]) : (arr_4 [i_0 + 1])))));
                var_12 = (max(var_12, var_7));
            }
        }
    }
    var_13 = ((var_8 ? var_7 : (((var_4 - var_5) ? var_1 : ((var_2 ? var_5 : var_8))))));
    var_14 = (min(var_5, var_6));
    #pragma endscop
}
