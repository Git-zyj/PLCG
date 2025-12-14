/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, ((((428102347 && var_10) ? (((var_0 ? var_2 : var_0))) : ((var_0 ? var_2 : var_5)))))));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((min(var_4, (arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]))) <= (((1137387012 ? 0 : (1284776408 != 5)))));
                arr_6 [i_0] |= (min(67, 3));
                var_13 += ((-10203302056273702624 || (((arr_4 [i_0 - 2] [i_1] [i_1]) || var_5))));
            }
        }
    }
    #pragma endscop
}
