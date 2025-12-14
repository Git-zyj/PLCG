/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (max((((((1315940279 ? 1315940279 : -64))) | (((-9223372036854775807 - 1) & var_2)))), (((((var_7 ? var_5 : 1))) ? (arr_2 [i_0 - 1] [i_0]) : (((var_7 + 9223372036854775807) << (var_1 - 30687)))))));
                    var_11 = ((((max(-1315940280, var_5))) ? var_8 : ((((max(var_8, var_5))) - (!var_1)))));
                    var_12 ^= var_0;
                    arr_9 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                    var_13 += var_7;
                }
            }
        }
    }
    var_14 = var_6;
    var_15 = (min(var_15, (~-1315940280)));
    var_16 = (((max((max(var_1, -1315940280)), ((-512 ? 10182 : 1)))) != (var_6 || var_1)));
    #pragma endscop
}
