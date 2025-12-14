/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -2190197322000130144;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((~((min((((arr_1 [i_1]) && (arr_0 [i_0]))), (!var_12))))));
                var_16 &= min(65535, (-32767 - 1));
                var_17 = (max(var_17, (((~(min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
