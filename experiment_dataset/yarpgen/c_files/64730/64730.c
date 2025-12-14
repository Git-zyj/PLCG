/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_1] = 27429;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = (var_10 + var_13);
                        var_17 = ((18446744073709551615 >> (16651912802504003162 - 16651912802504003127)));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_3] = ((((((arr_11 [i_0]) ? var_8 : (arr_9 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3])))) ? (((13204 && (arr_4 [i_1] [i_3 + 2])))) : var_12));
                    }
                }
            }
        }
    }
    var_18 ^= ((var_12 ? (((max(16383, var_4)))) : (max(((var_10 ? 18446744073709551609 : 1391358690)), (~64667)))));
    #pragma endscop
}
