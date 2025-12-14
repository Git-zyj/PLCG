/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_3, (((31744 ? 28 : 89))))) + var_11));
    var_17 = (((max(-89, (((var_5 ? var_2 : var_12))))) * var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((2896719928956608631 ? (arr_3 [i_0]) : -2896719928956608612));
                var_19 *= -17762;
                arr_7 [i_0] [i_0] [i_1] = (min(((max(26159, 54))), (((arr_0 [i_0]) % (2896719928956608638 | var_7)))));
            }
        }
    }
    var_20 += ((var_1 || (((-2279772688574650467 ? var_6 : -var_4)))));
    #pragma endscop
}
