/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = 9223372036854775806;
                arr_6 [i_0] = var_2;
            }
        }
    }
    var_14 = ((~((((min(var_6, 1))) ? 39551 : -7294994485560673727))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_15 &= var_7;
                    var_16 = min(65535, 1996855692577925642);
                }
            }
        }
    }
    var_17 = (max(var_17, (((((!(!var_3))))))));
    #pragma endscop
}
