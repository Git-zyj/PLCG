/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((!(arr_1 [i_0])))))));
                var_20 = (max(var_20, (((-(~var_18))))));
            }
        }
    }
    var_21 = ((!(--41260)));
    var_22 = (max(var_22, (((~(--0))))));
    var_23 = (max(var_23, (!var_2)));
    #pragma endscop
}
