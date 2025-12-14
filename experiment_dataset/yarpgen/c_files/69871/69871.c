/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((min((min(1, 4878864060321948709)), var_6))))));
                var_20 = ((var_0 ? ((((arr_0 [i_0]) | (arr_0 [i_0])))) : (max(((var_15 ? 4294967295 : 562949953420288)), ((min(1262830768, var_7)))))));
            }
        }
    }
    var_21 = var_4;
    var_22 = var_10;
    #pragma endscop
}
