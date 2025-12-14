/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = -23426;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_1]) ? -var_10 : (arr_4 [i_0] [i_1])));
                arr_7 [i_0] [1] = arr_5 [i_0] [i_0] [17];
            }
        }
    }
    var_13 &= (max((max((!var_4), 16153645647211947227)), ((max((((var_0 ? var_8 : var_7))), var_5)))));
    var_14 = (min(var_14, var_4));
    #pragma endscop
}
