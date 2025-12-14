/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(((~(~var_7))), ((-((2988618461 ? var_9 : 4398046511103))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 1073741823));
                    arr_7 [i_0] = ((((((1 / (arr_5 [i_0])))) ? (arr_5 [i_2]) : var_6)));
                    var_17 = ((4294967295 ? 1073741824 : 1492036212));
                }
            }
        }
    }
    #pragma endscop
}
