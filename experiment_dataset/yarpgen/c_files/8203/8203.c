/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((((-801443935 ? -122 : 96)))) ? var_4 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0 - 1]);
                var_15 = ((((arr_1 [i_1]) && (((16334093846907058317 ? 123 : 213012302))))) ? ((-116 ? (arr_4 [i_0] [i_1] [i_1]) : ((min(180, (arr_3 [i_0])))))) : ((((((-2016015525 ? var_3 : var_1))) || -8192))));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
