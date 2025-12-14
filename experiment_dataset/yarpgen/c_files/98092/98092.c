/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (!1892432826793492480);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= 131071;
                var_20 = var_1;
                var_21 = (((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 3]) : var_11)) / var_14));
                arr_6 [i_0 + 1] [i_0] = (min(32767, 1));
            }
        }
    }
    var_22 = (var_7 ? (!var_11) : var_6);
    #pragma endscop
}
