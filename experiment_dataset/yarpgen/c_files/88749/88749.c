/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(var_13, -1058149951));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (((arr_3 [8] [15]) / 2137864366));
                            var_16 = (max(var_16, (((((0 != ((var_9 ? var_10 : var_2)))) ? ((((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [i_2]) - 1073591797))))) : ((3236817353 << (3236817340 - 3236817339))))))));
                            arr_10 [i_3] = var_7;
                        }
                    }
                }
                var_17 *= ((min(1058149956, (!199))));
            }
        }
    }
    var_18 = ((~((var_8 ? ((-4093515 ? 18446744073709551593 : var_10)) : ((min(4294967295, var_3)))))));
    var_19 = (min(var_19, (((~((((((var_1 ? var_9 : var_2))) >= var_12))))))));
    #pragma endscop
}
