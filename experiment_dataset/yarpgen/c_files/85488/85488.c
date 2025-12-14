/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~28540) > var_4));
    var_16 = ((((((((var_12 ? var_2 : var_0)) <= ((var_10 ? var_4 : var_0)))))) < (var_3 | 28540)));
    var_17 = (max(var_17, ((((((((var_8 ? var_6 : var_5))) < 4294967289)) ? (((var_14 ? var_4 : 1))) : (((0 ? 10911 : 22))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = var_14;
                    arr_7 [i_0] [i_1] [i_1] [i_0] = (((((255 ? -10939 : 1))) ? ((231 ? 1 : (-32767 - 1))) : ((var_8 ? var_10 : var_14))));
                    arr_8 [i_0] [i_0] [i_1 - 1] [i_2 - 2] = (((6 != var_10) && ((((var_6 == 7189) ? 162 : ((var_11 ? 4294967282 : var_13)))))));
                    var_18 -= (((max(var_13, var_10))) / var_12);
                    var_19 -= (((((~((max(var_4, 100)))))) || (((((min(var_9, 1)))) == (max(var_2, var_1))))));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
