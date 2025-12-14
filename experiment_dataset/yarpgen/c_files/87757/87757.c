/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((~var_4) - (var_9 < var_8)));
    var_11 -= var_1;
    var_12 = ((~((((min(-7517632980023970142, -7517632980023970142))) ? var_7 : ((var_5 ? 0 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [11] [i_1] [i_1] |= (((((-20 ? var_2 : (arr_2 [i_1])))) ^ 24039524));
                var_13 = (max(var_13, (((62 ? 1 : 122065455)))));
            }
        }
    }
    var_14 |= ((((((97 ? var_4 : var_6))) ? ((var_0 ? -7517632980023970142 : -28425)) : 5)) - 144115153716117504);
    #pragma endscop
}
