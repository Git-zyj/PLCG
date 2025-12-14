/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_1;
    var_15 *= ((((min(var_2, ((59 ? 31287 : 224))))) ? var_6 : (((((((min(var_2, var_3)))) <= 4294692855570726227))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (((min((min(var_10, 162)), 16987))) ? ((((var_10 >> (var_1 - 23336))))) : 4294692855570726245);
                    arr_8 [i_0] = (max((((68 ? 50837 : 698423311))), (~14152051218138825363)));
                }
            }
        }
    }
    #pragma endscop
}
