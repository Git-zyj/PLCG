/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(27195, (max(((max(var_9, var_6))), var_5)))))));
    var_12 = 99;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_7));
                var_14 = ((((arr_2 [i_0] [i_0]) ? ((5189 ? var_3 : (arr_6 [i_0] [i_0 - 1] [i_0]))) : (arr_6 [i_0] [i_1 - 1] [14]))));
            }
        }
    }
    var_15 = ((((min(var_10, (210733911 && var_1)))) ? (((min(-9, var_2)))) : (!11)));
    var_16 = (((!var_2) ? var_7 : (((var_4 == (((27282 ? var_6 : 97))))))));
    #pragma endscop
}
