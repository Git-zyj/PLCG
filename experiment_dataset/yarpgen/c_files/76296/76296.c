/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 & 8143);
    var_19 = ((((((var_3 & 1252) - (-1253 + 1252)))) ? (((~1) ? ((4294967295 ? 262143 : 1252)) : (-1262 | var_3))) : (((-13214 ? 0 : (var_1 | -31453))))));
    var_20 = (1 != -var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = 26063;
                    arr_9 [i_0] [1] = ((0 || (((var_14 ? var_15 : 1357553089)))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = (((min((~3675541787), -1262)) | -5322));
                }
            }
        }
    }
    #pragma endscop
}
