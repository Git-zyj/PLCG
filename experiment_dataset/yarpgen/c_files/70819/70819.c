/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((((var_2 ? (arr_2 [i_0 - 2]) : ((((arr_3 [i_1] [i_0 - 3] [13]) == 6993835430270947321)))))) | (((((var_7 ? 2147483647 : 6993835430270947321))) ? 11452908643438604294 : (((arr_3 [i_1] [i_1] [i_1]) ? 8263957143059165167 : var_8))))));
                arr_5 [i_1] [i_1] [i_1] = ((((arr_2 [i_0 - 1]) ? (((arr_0 [i_0 - 3] [i_1]) ? var_16 : (arr_3 [i_0] [i_0 - 3] [i_1]))) : 120)));
            }
        }
    }
    var_17 = (max((1797276030 << var_2), ((((var_9 ? var_2 : 11452908643438604294))))));
    var_18 ^= ((-94 ? 46 : 1));
    #pragma endscop
}
