/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((!((max(var_3, 12786776232687595584))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_9 [i_1] = (((arr_4 [1] [i_1] [i_1] [i_1]) ^ ((928890987 ? 5659967841021956032 : 27782))));
                        var_16 = (min(var_16, 8226));
                        var_17 = (arr_4 [3] [i_1] [3] [i_3]);
                        var_18 = ((var_6 ? (arr_1 [i_3 + 1]) : (-939167437 >= 42)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] = (max(((min((-9223372036854775807 - 1), 1))), (~12813)));
                        arr_13 [i_0] [i_1] [i_4] = (0 % -78);
                        var_19 = (min(var_19, (((arr_10 [1] [1] [i_1] [i_2] [i_4] [i_4]) ? (-127 - 1) : (min(1992147778, (arr_4 [i_0] [5] [i_2] [8])))))));
                    }
                    var_20 = (max((((arr_3 [i_0] [i_1] [i_2]) ? 3463711190 : (arr_3 [i_1] [i_1] [i_2]))), 236887186));
                    var_21 = (min(var_21, ((min((((~((1788514533 ? (arr_5 [i_0] [i_0] [i_0]) : var_5))))), (min(817388324, (max(var_14, 12786776232687595593)))))))));
                    var_22 = ((4294967291 ? 0 : 65535));
                }
            }
        }
    }
    #pragma endscop
}
