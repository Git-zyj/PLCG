/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-var_0 ? ((min(3062300572, 1)) : (var_0 * var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (min(1, var_1))));
                    var_12 = (min(var_12, (min((((((-10990 ? 1 : var_2))) ? (((-(arr_4 [i_0])))) : 11295487152456306169)), 11295487152456306169))));
                    var_13 += (((arr_4 [i_1]) + (arr_6 [i_0] [i_1] [13] [i_2 + 3])));
                }
            }
        }
    }
    var_14 *= (max(-var_7, ((((var_8 < 1) * (var_5 < -9096048964597766801))))));
    #pragma endscop
}
