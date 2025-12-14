/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= (((((1 < var_10) != (!146))) ? ((((((max(var_12, (arr_3 [i_1] [i_0])))) == -93)))) : var_17));
                var_19 = var_15;
            }
        }
    }
    var_20 = (max((((109 > 146) ? var_5 : 148)), (min(((1355183875 ? var_3 : (-2147483647 - 1))), var_10))));
    #pragma endscop
}
