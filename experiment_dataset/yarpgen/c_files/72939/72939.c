/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((((min(-510136740, (arr_0 [i_1])))) >= ((63337 ? -1949611468 : 6687))));
                var_19 = ((-2147483647 - 1) ? 25 : 228220736);
                var_20 = (((1949611461 - 6687) << (var_14 - 16495)));
                var_21 = (min(var_21, var_5));
            }
        }
    }
    var_22 = (!var_12);
    var_23 = ((min((min(var_15, 12062)), var_10)) % (((!(var_13 < var_8)))));
    #pragma endscop
}
