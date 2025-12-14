/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((!(((var_4 ? (var_13 && 28298) : (arr_1 [i_0] [i_0]))))));
                var_15 ^= var_5;
                var_16 = -28276;
                var_17 = ((175 ? ((-(arr_0 [i_1]))) : ((((min(var_7, 2044))) ? ((max(var_8, (arr_1 [i_0] [i_0])))) : ((var_11 ? (arr_1 [i_0] [i_0]) : 20788))))));
                var_18 = var_0;
            }
        }
    }
    var_19 = var_3;
    var_20 = (max(((-((var_4 ? -902932016593946206 : 11892)))), ((min((-26970 | var_8), ((-2884 ? 11882 : var_2)))))));
    var_21 = (min(var_21, var_10));
    #pragma endscop
}
