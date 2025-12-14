/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 230;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 ^= ((196 ? 15 : 1));
                var_19 += (((!200) % (((((63 << (((arr_2 [i_0]) - 12))))) ? (((arr_4 [i_0]) ? 237 : var_10)) : (arr_0 [i_0])))));
                var_20 = (180 && 236);
            }
        }
    }
    #pragma endscop
}
