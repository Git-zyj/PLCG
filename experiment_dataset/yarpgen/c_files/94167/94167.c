/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((min(var_2, var_12))) && (!16))))));
    var_16 = ((((var_4 && var_5) ? ((38796 ? 4192256 : 120)) : (!var_13))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((-(((arr_5 [i_0] [i_0 - 1]) ? var_8 : 2178))))));
                var_18 = var_7;
                var_19 += ((((!(arr_1 [7] [19]))) && ((864691128455135232 && (arr_2 [i_1])))));
            }
        }
    }
    var_20 = -var_8;
    #pragma endscop
}
