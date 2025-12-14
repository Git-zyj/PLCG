/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_8) >= var_4));
    var_12 = 255;
    var_13 = (max(var_13, var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(var_14, 12));
        var_15 = (!var_1);
        var_16 = ((-62 ? 31 : 1));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 += ((((((((15 ? var_7 : (arr_6 [i_0])))) ? 4294967295 : ((var_9 ? var_9 : var_0))))) ? var_2 : 12));
                    var_18 = ((!(7 % var_1)));
                }
            }
        }
    }
    #pragma endscop
}
