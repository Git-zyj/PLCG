/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (min(var_5, var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [7] = 3058945158969089371;
                var_17 = (max(var_17, ((min(((max(((var_10 ? var_4 : var_3)), var_12))), (max(var_3, ((var_14 ? (arr_2 [8] [0] [1]) : 3058945158969089378)))))))));
            }
        }
    }
    var_18 -= ((0 ? (max(3058945158969089361, ((min(var_12, 1073737728))))) : ((max(((max(0, var_14))), var_9)))));
    #pragma endscop
}
