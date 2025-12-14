/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 10;
        var_13 = ((((var_10 << (((arr_0 [i_0 - 2] [i_0]) - 1465807325)))) << (var_9 - 14361306847262267831)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, var_9));
                        arr_9 [i_3] [i_3] [i_3] = ((-((4547 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_0 + 2]) : var_8))));
                        var_15 = ((!-54) * ((26 ? var_10 : 53)));
                    }
                }
            }
        }
        var_16 &= ((((((arr_3 [i_0]) ? var_9 : (~45)))) ? (((65529 ? var_10 : ((max(1, 63)))))) : (max((~var_0), (((~(arr_3 [i_0]))))))));
    }
    var_17 ^= 65;
    #pragma endscop
}
