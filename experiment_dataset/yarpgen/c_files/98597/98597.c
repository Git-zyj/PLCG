/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 -= (!-46815);
        var_16 = (min(var_16, ((((((var_7 && -1024) <= var_4)) ? ((-32638 ? var_5 : (((arr_1 [8]) * var_13)))) : 23)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (max(-5020, 939524096));
                        var_17 = (max(var_17, -var_0));
                        var_18 = ((((max((min(var_3, -64)), ((-(arr_4 [i_2 + 1] [i_0])))))) ? (((((1 ? -569247623 : var_11)) == ((28236 ? (arr_3 [i_0] [i_3]) : var_8))))) : ((((arr_4 [i_2 + 1] [i_0]) > var_1)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = 51164;
                    }
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (max(((20 ? -30393 : -16777208)), ((var_11 ? var_5 : var_2))));
    #pragma endscop
}
