/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((arr_0 [14]) & (max((arr_2 [8]), 44274)))))));
                var_18 = (max(var_18, ((((((((min(var_2, 2097151))) ? (((var_16 ? var_8 : (arr_3 [i_1])))) : ((-12559 ? 6072967600872507855 : 19357))))) ? (arr_3 [i_0]) : (arr_4 [0]))))));
                arr_7 [i_0] = 8926181643863487315;
            }
        }
    }
    var_19 = ((((max(-var_9, ((max(16286, -6072967600872507855)))))) ? (!-2097144) : var_9));
    var_20 = (max(var_20, ((((((13624920794752407784 ? var_6 : var_13))) == ((min((-7 / -10627), var_2))))))));
    var_21 = ((((((((105 ? -22737 : -569264577))) + (max(var_2, var_15))))) ? (((~var_3) ? var_11 : (var_16 % var_7))) : var_2));
    #pragma endscop
}
