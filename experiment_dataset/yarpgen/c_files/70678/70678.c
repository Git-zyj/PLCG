/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 8953797226950394354;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((2 >> ((var_2 ? (((-(arr_1 [i_0])))) : (arr_3 [i_0] [i_0] [i_0])))));
                arr_4 [18] = (+-31001);
                var_17 ^= (min((((-25454 ? 232 : (arr_1 [i_0])))), -8062690408437119561));
            }
        }
    }
    var_18 ^= var_11;
    #pragma endscop
}
