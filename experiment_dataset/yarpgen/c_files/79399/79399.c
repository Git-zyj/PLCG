/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 &= (~562949953421308);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((arr_0 [i_0] [i_1]) + 9223372036854775807)) >> (((((-562949953421322 + 9223372036854775807) >> ((((var_9 ? -562949953421291 : 2217256971)) + 562949953421316)))) - 274861129727))))));
                arr_4 [i_0] [i_0] = (arr_2 [i_1]);
                var_21 = (max(var_21, (((~(min(var_8, (arr_0 [i_1] [i_0 - 2]))))))));
            }
        }
    }
    var_22 = -5777527212427386628;
    #pragma endscop
}
