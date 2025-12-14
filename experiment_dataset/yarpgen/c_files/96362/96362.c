/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 += (~-14162);
    var_20 = ((((((-8006325648077031891 / var_2) / (((var_14 ? 1501721908 : var_8)))))) && var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [14] = ((~(~-20)));
                arr_6 [i_0] [i_0 + 2] = ((4194303 == (max((5762453312037110411 | var_1), var_9))));
                var_21 = (((((~(arr_0 [i_1 + 3])))) ? (min(2772563724467550705, 117)) : (~232690163)));
                arr_7 [i_0 + 1] [i_0] [i_0 + 1] = var_6;
            }
        }
    }
    #pragma endscop
}
