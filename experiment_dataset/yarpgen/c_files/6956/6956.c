/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 += ((arr_2 [i_1 + 1]) ? (max(133, 954337911411750459)) : -24580);
                var_15 = ((((268435455 ? 9719001011759552154 : 1)) * -48507));
                var_16 ^= ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 9719001011759552154))) ? -9719001011759552157 : ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                arr_5 [i_0] = ((((arr_1 [i_0]) ? var_1 : 824753474)));
            }
        }
    }
    var_17 |= var_0;
    #pragma endscop
}
