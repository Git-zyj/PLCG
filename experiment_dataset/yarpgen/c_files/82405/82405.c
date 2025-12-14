/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min((0 && 939524096), (min(((((-2147483647 - 1) || 2150993979))), (((arr_3 [5] [i_1 + 2]) ^ var_7))))));
                    var_19 = (arr_4 [i_0] [i_1 + 1]);
                    var_20 |= -939524096;
                    var_21 = 288230376151711743;
                }
            }
        }
    }
    var_22 = 6653208108138645102;
    var_23 -= ((var_7 ? (max((var_1 && var_6), (min(var_10, 17112760320)))) : 939524096));
    #pragma endscop
}
