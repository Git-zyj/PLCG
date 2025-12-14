/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(4063232, -102));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((var_11 ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 + 1]))) >> (((((var_10 & var_4) << (((~var_7) + 117)))) - 1238489897526886391))));
                var_20 = max((((8 ? 5846086580673738733 : -27302))), (5846086580673738754 / 80));
                var_21 *= (arr_0 [i_1 + 1]);
            }
        }
    }
    var_22 = (((((((min(-5846086580673738729, var_12))) ? (~var_1) : var_4))) ? (-52 <= 10479635263319011349) : var_8));
    #pragma endscop
}
