/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 &= (!var_12);

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_1, var_14));
        arr_2 [i_0] = var_14;
        arr_3 [i_0] = -1508583065914437216;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = (max((max((arr_1 [16]), (arr_1 [6]))), (min(((var_16 ? 16383 : var_9)), (arr_5 [i_1])))));
        var_22 = 24498;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_23 = (+((((arr_6 [i_2 - 1]) <= (arr_6 [i_2 - 3])))));
                        var_24 = ((+((((arr_1 [i_2]) < (arr_1 [i_2]))))));
                    }
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = var_14;
    #pragma endscop
}
