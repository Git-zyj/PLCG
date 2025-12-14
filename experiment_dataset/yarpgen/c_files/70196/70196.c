/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((max(var_5, -var_7)), 1043835484);
    var_15 &= var_13;
    var_16 = (min(var_16, 1881184821));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((var_6 + ((1881184807 ? 2413782474 : 52))))));
                    var_18 -= (var_12 != 2448924572);
                    var_19 = (min(var_19, ((-(arr_0 [i_2 + 1])))));
                    var_20 = (1881184821 | 2203432525);
                }
            }
        }
    }
    #pragma endscop
}
